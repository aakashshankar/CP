#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    // cout << st.empty() << endl;
    for(int i=0;i<s.length();++i){
        if(!st.empty() && ((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{'))){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(!st.empty()){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
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
