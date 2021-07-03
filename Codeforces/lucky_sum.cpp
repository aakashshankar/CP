#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

bool is_lucky(ll x){
    while(x){
        int dig=x%=10;
        if(dig!=7 || dig!=4){
            return false;
        }
        x/=10;
    }
    return true;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll l, r;
    cin >> l >> r;
    set<ll> a;
    for(ll i=1;i<=pow(10,9);++i){
        if(is_lucky(i))
            a.insert(i);
    }
    ll sum=0;
    for(int i=l;i<=r;++r){
        sum+=*(a.lower_bound(l));
    }
    cout << sum << endl;
    return 0;
}
