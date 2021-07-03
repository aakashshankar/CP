#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

void solve(){
    string x,y="";
    int k,c=0;
    cin >> x;
    cin >> k;
    for(char ch: x){
        if(ch=='0'){
            y+="1";
            c++;
        }else{
            y+="0";
        }
    }
    if(c<=k){
        cout << y << endl;
        return;
    }
    for(int i=y.length()-1;c>k;--i){
        if(y[i]=='1'){
            y[i]='0';
            c--;
        }
    }
    cout << y << endl;
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
