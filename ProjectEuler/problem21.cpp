#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

ll d(ll n){
    ll c=1;
    for(long i=2;i<=sqrt(n);++i)
        if(n%i==0){
            if(n/i==i)
                c+=i;
            else
                c+=(i+(n/i));
        }
    return c;
}

int main(){
    ios::sync_with_stdio(0);
    ll x,sum=0;
    // cout << d(284) << '\t' << d(220) << endl;
    for(ll i=10;i<=10000;++i){
        ll x=d(i);
        if(x!=i && i==d(x)){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
