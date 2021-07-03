#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

void solve() {
    string a;
    cin >> a;
    int i=1,c=0;
    while(i<a.length()){
        if(a[i]==a[i-1]){
            c++;
            a.erase(i-1,2);
            i-=2;
            // continue;
        }
        i++;
    }
    cout << c << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
