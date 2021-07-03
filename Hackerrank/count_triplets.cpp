#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

unordered_map<ll, int> get_map(int i, vector<ll>& a){
    unordered_map<ll, int> m;
    for(int j=i+1;j<a.size();++j){
        m[a[j]]++;
    }
    return m;
}

void print_map(unordered_map<ll, int> m) {
    for(auto it=m.begin();it!=m.end();++it){
        cout<< "key: " << it->first << ", value: " << it->second << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    ll x,r;
    cin >> n >> r;
    vector<ll> a;
    unordered_map<ll, int> t,m;
    for(int i=0;i<n;++i){
        // m=get_map(i, a);
        cin >> x;
        t[x]++;
        a.push_back(x);
    }
    long c=0;
    int f1;
    if(r==1){
        for(auto it=t.begin();it!=t.end();++it){
            c+=(it->second*it->second-1*it->second-2)/6;
        }
    }else if(is_sorted(a.begin(), a.end())){
        int i=0;
        while(i<n){
            auto pos1=find(a.begin(), a.end(), a[i]*r);
            if(pos1==a.end()){
                i+=t[a[i]];
                continue;
            }
            auto pos2=find(a.begin(), a.end(), a[i]*r*r);
            if(pos2==a.end()){
                i+=t[a[i]];
                continue;
            }
            c+=(t[a[i]]*t[a[i]*r]*t[a[i]*r*r]);
            i+=t[a[i]];
        }
    }else{
        for(int i=0;i<n-2;++i){
            // cout << "--------------------------\n";
            m=get_map(i, a);
            // print_map(m);
            if(m[a[i]*r]==0){
                continue;
            }
            f1=m[a[i]*r];
            auto it=find(a.begin()+i+1, a.end(), a[i]*r);
            // cout << "ele: " << a[i]*r << " index: " << it-a.begin() << endl;
            m=get_map(it-a.begin(), a);
            // print_map(m);
            // if(m[a[i]*r*r]!=0)
            //     cout << "ele: " << a[i]*r*r << " index: " << find(it+1, a.end(), a[i]*r*r)-a.begin() << endl;
            // else
            //     cout << "ele: " << a[i]*r*r << " index: " << -1 << endl;
            c+=(f1*m[a[i]*r*r]);
        }
    }
    cout << c << endl;
    return 0;
}
