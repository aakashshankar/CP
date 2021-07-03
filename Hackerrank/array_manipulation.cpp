#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    long n;
    int m;
    long a,b;
    ll k;
    cin >> n >> m;
    vector<int> v(n,0);
    for(int i=0;i<m;++i){
        cin >> a >> b >> k;
        for(int i=a;i<=b;++i){
            v[i]+=k;
        }
    }
    cout << *max_element(v.begin(), v.end()) << endl; 
    return 0;
}
