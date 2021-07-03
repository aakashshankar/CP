#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define MOD 1000000007
using namespace std;

ll x,y;

ll mod(ll a)
{
    ll r = a % MOD;
    return r < 0 ? r + MOD : r;
}

ll f(ll n){
    if(n==1){
        return x;
    }else if(n==2){
        return y;
    }
    return f(n-1)-f(n-2);
}

int main() {
    ios::sync_with_stdio(0);
    cin >> x >> y;
    ll n;
    cin >> n, --n;
    if(n%6==0){
        cout << mod(x) << endl;
    }else if(n%6==1){
        cout << mod(y) << endl;
    }else if(n%6==2){
        cout << mod(y-x) << endl;
    }else if(n%6==3){
        cout << mod(-x) << endl;
    }else if(n%6==4){
        cout << mod(-y) << endl;
    }else{
        cout << mod(x-y) << endl;
    }
    return 0;
}
