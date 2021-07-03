#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n,t;
    string s,x;
    cin >> n >> t;
    cin >> s;
    // x=s;
    while(t--){
        for(int i=1;i<n;++i){
            if(s[i-1]=='B' && s[i]=='G'){
                s[i-1]='G';
                s[i]='B';
                ++i;
                // break;
            }
            // cout << s << endl;
        }
    }
    cout << s << endl;
    return 0;
}
