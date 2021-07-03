#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

string to_binary(int n){
    string a="";
    while(n){
        a+=char((n%2)+48);
        n/=2;
    }
    reverse(a.begin(), a.end());
    return a;
}

void solve(){
    int n;
    cin >> n;
    string a=to_binary(n);
    cout << a.length() << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
