#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

ll f(ll n){
    // int f=0;
    if(n%2==0)
        return 2;
    for(long i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return (ll)i;
    }
    return n;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    while(k>0){
        // cout << "n: " << n << endl;
        if(n%2==0){
            n+=(2*k);
            break;
        }
        n+=f(n);
        k--;
    }
    cout << n << endl;
}

int main(){
    ios::sync_with_stdio(0);
    // cout << f(7) << '\t' << f(35) << endl;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
