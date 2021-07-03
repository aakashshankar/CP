#include <bits/stdc++.h>
#define ll long
#define endl '\n'

using namespace std;
bool is_prime(ll n){
    if(n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    ll n;
    cin >> n;
    ll i=3;
    int k=1;
    cout << 2;
    while(k<n){
        if(is_prime(i)){
            cout << " " << i;
            k++;
        }
        i++;
    }
    cout << endl;
    return 0;
}
