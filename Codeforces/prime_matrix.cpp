#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool is_prime(ll n){
    if(n==2)
        return true;
    if(n%2==0 || n==1)
        return false;
    for(ll i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

ll to_next_prime(ll n){
    while(!is_prime(n)){
        n++;
    }
    return n;
}

vector<ll> get_next_prime(){
    vector<ll> next_primes(100000, 0);
    for(ll i=1;i<=100000;++i){
        next_primes[i]=to_next_prime(i);
    }
    return next_primes;
}

int main() {
    ios::sync_with_stdio(0);
    ll x,n,m;
    cin >> n >> m;
    vector<vector<ll>> a;
    vector<ll> t;
    for(ll i=0;i<n;++i){
        t.clear();
        for(ll j=0;j<m;++j){
            cin >> x;
            t.push_back(x);
        }
        a.push_back(t);
    }
    vector<ll> next_primes=get_next_prime();
    // cout << to_next_prime(1)-1 << endl;
    ll c,min_moves=INT_MAX;
    for(ll i=0;i<n;++i){
        c=0;
        for(ll j=0;j<m;++j){
            // cout << "Diff: " << to_next_prime(a[i][j])-a[i][j] << endl;
            c+=next_primes[a[i][j]]-a[i][j];
        }
        min_moves=min(min_moves,c);
    }
    for(ll i=0;i<m;++i){
        c=0;
        for(ll j=0;j<n;++j){
            // cout << "Diff: " << to_next_prime(a[i][j])-a[i][j] << endl;
            c+=next_primes[a[j][i]]-a[j][i];
        }
        min_moves=min(min_moves,c);
    }
    cout << min_moves << endl;
    return 0;
}
