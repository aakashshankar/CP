#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,l,u;
    cin >> n;
    // ll=1, ul=n;
    vector<ll> a(n);
    ll ans=0;
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=1;i<=n;++i){
        ans+=abs(a[i-1]-i);
    }
    cout << ans << endl;
    return 0;
}
