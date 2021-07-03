#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    ll n,k=3,sum=0,p=1;
    cin >> n;
    for(int i=1;i<=n/2;++i){
        sum+=((k*k)-p)*i;
        p=k*k;
        // cout << sum << endl;
        k+=2;
    }
    cout << sum << endl;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
