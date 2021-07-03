#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;
// string s;
// void change_cursor(std::string::iterator& it, char sym){
//     switch(sym){
//     case '*':
//         if(it==s.begin()){
//             break;
//         }
//         s.erase(it-1,1);
//
//     break;
//     }
// }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    // string ans="";
    vector<char> ans;
    std::vector<char>::iterator it;
    // int i=0,j=0;
    bool num=true;
    char cursor='e';
    for(long unsigned int i=1;i<s.length();++i){
        if(s[i]=='*'){
            s.erase(i-1,2);
            i-=2;
        }
    }
    // cout << s << endl;
    for(long unsigned int i=0;i<s.length();++i){
        if(s[i]=='<'){
            cursor='b';
            it=ans.begin();
            i++;
        }else if(s[i]=='>'){
            cursor='e';
            i++;
        }else if(s[i]=='#'){
            num=!num;
        }
        if(cursor=='e'){
            if(isdigit(s[i]) && num){
                ans.push_back(s[i]);
            }else if(isalpha(s[i])){
                ans.push_back(s[i]);
            }
        }else{
            if(isdigit(s[i]) && num){
                ans.insert(it,s[i]);
            }else if(isalpha(s[i])){
                ans.insert(it, s[i]);
            }
            it=ans.begin()+1;
        }
        // for(char ch: ans){
        //     cout << ch;
        // }
        // cout << endl;
    }
    // cout << ans << endl;
    for(char ch:ans){
        cout << ch;
    }
    cout << endl;
    return 0;
}
