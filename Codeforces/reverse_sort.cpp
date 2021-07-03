#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    ll x,n;
    cin >> n;
    vector<ll> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n;++i){
        cout << a[i] << " ";
    }
    return 0;
}
