#include <bits/stdc++.h>
#define ll long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int c;
    ll x,y,v;
    cin >> c;
    vector<vector<ll>> a;
    for(int i=0;i<c;++i){
        cin >> x >> y >> v;
        a.push_back({x,y,v});
    }
    // for(int i=0;i<c;++i){
    //     for(int j=0;j<3;++j){
    //         cout << a[i][j] << '\t';
    //     }
    //     cout << endl;
    // }
    int q=0,count;
    int t;
    vector<int> time;
    for(int i=0;i<c;++i){
        // for(int j=i+1;j<c;++j){
        //     t1=sqrt(a[i][0]*a[i][0]+a[i][1]*a[i][1])/a[i][2];
        //     t2=sqrt(a[j][0]*a[j][0]+a[j][1]*a[j][1])/a[j][2];
        //     // cout << "t1: " << t1 << " t2: " << t2 << endl;
        //     if(t1==t2)
        //         q++;
        // }
        t=sqrt(a[i][0]*a[i][0]+a[i][1]*a[i][1])/a[i][2];
        time.push_back(t);
    }
    int n=time.size();
    // for(int i=0;i<n-1;++i){
    //     for(int j=i+1;j<n;++j){
    //         if(time[i]==time[j]){
    //             q++;
    //         }
    //     }
    // }
    // sort(time.begin(), time.end());
    // print_vector(time);
    // int i=0,o;
    // while(i<n){
    //     o=count(time.begin(),time.end(),time[i]);
    //     cout << "o: " << o << endl;
    //     q+=o;
    //     i++;
    // }
    // cout << q << endl;
    unordered_map<int, int> m;
    for(int i=0;i<n;++i){
        m[time[i]]++;
    }
    for(auto i=m.begin();i!=m.end();++i){
        count=i->second;
        q+=(count*(count-1))/2;
    }
    cout << q << endl;
    return 0;
}
