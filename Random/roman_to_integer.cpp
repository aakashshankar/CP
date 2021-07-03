#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

unordered_map<char, int> roman={
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000}
};

int romanToInteger(string s){
    int val=0;
    int i=0;
    int n=s.length();
    while(i<n){
        // while(i<s.length() && roman[s[i]]>=roman[s[i+1]]){
        //     val+=roman[s[i]];
        //     i++;
        // }
        if(roman[s[i]]>=roman[s[i+1]]){
            // cout << roman[s[i]] << endl;
            val+=roman[s[i]];
            i++;
        }else{
            // cout << roman[s[i+1]] << "-" << roman[s[i]] << endl;
            val+=(roman[s[i+1]]-roman[s[i]]);
            i+=2;
        }
        // i++;
    }
    return val;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << romanToInteger(s) << endl;
    return 0;
}
