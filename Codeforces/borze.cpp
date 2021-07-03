#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i){
        if(s[i]=='.')
            cout << 0;
        else if(s[i]=='-' && s[i+1]=='.'){
            cout << 1;
            ++i;
        }else{
            cout << 2;
            ++i;
        }
    }
    cout << endl;
    return 0;
}
