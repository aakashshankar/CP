#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i];
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i];
        }
    }
    cout << endl;
}

vector<int> subtract(vector<int> m, vector<int> n){
    vector<int> res;
    int i,j,zeroes;
    if(n.size()>m.size()){
        return {-1};
    }
    if(n.size()==m.size()){
        int i=n.size()-1;
        while(i>=0 && m[i]>=n[i]){
            i--;
        }
        if(i!=-1){
            return {-1};
        }
    }
    for(i=0;i<n.size();++i){
        if(m[i]-n[i]<0){
            m[i]+=10;
            j=i+1;
            while(j<m.size() && m[j]==0){
                m[j]=9;
                j++;
            }
            m[j]--;
        }
        res.push_back(m[i]-n[i]);
    }
    for(int k=i;k<m.size();++k){
        res.push_back(m[k]);
    }
    zeroes=count(res.begin(), res.end(), 0);
    if(zeroes==res.size()){
        return {0};
    }
    i=res.size()-1;
    // auto it=res.begin();
    while(res[i]==0){
        i--;
    }
    res.erase(res.begin()+i+1, res.end());
    return res;
}

vector<int> to_vector(string s){
    vector<int> a;
    for(char ch:s){
        a.push_back(ch-'0');
    }
    reverse(a.begin(), a.end());
    return a;
}

int main() {
    ios::sync_with_stdio(0);
    // cin.tie(NULL);
    string m,n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    vector<int> res=subtract(to_vector(m), to_vector(n));
    // cout << res.size() << endl;
    print_vector(res, true);
    return 0;
}
