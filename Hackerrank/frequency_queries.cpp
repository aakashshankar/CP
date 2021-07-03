#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

unordered_map<ll, ll> m;
unordered_map<ll, int> f;

void solve() {
    short q;
    ll t;
    cin >> q >> t;
    switch(q){
        case 1:
            if(f[m[t]])
                f[m[t]]--;
            m[t]++;
            f[m[t]]++;
        break;
        case 2:
            if(f[m[t]])
                f[m[t]]--;
            if(m[t]>0){
                m[t]--;
            }
            // f[m[t]]=(m[t])?(1):(0);
            if(m[t]){
                f[m[t]]++;
            }
        break;
        default:
            cout << ((f[t])?(1):(0)) << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}
