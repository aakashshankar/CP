#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

void solve(){
    string a;
    pair<int, int> c={0,0};
    cin >> a;
    int q=count(a.begin(), a.end(), '?');
    for(char ch:a){
        if(ch=='?'){
            continue;
        }
        switch(ch){
            case 'U':
            (c.second)++;
            break;
            case 'R':
            (c.first)++;
            break;
            case 'D':
            (c.second)--;
            break;
            default:
            (c.first)--;
        }
    }
    cout << (c.first)-q << " " << (c.second)-q << " " << (c.first)+q << " " << (c.second)+q << endl;
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
