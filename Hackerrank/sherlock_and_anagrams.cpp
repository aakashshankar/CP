#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

vector<string> get_substrings(string s){
    vector<string> a;
    string t;
    for(int i=1;i<s.length();++i){
        // t="";
        for(int j=0;j<=s.length()-i;++j){

            a.push_back(s.substr(j,i));
            // t+=s[j];
            // a.push_back(t);
        }
    }
    return a;
}

// void print_map(unordered_map<char, int> m) {
//     for(auto it=m.begin();it!=m.end();++it){
//         // cout<< "key: " << it->first << ", value: " << it->second << endl;
//     }
// }

void solve() {
    string s;
    cin >> s;
    bool ok;
    int c=0;
    unordered_map<char, int> m,t;
    vector<string> substrings=get_substrings(s);
    for(int i=0;i<substrings.size()-1;++i){
        m.clear();
        for(char ch:substrings[i])
            m[ch]++;
        for(int j=i+1;j<substrings.size();++j){
            // ok=true;
            if(substrings[i].length()!=substrings[j].length())
                continue;
            // m.clear();
            t.clear();
            // cout<< "Comparing: " << substrings[i] << '\t' << substrings[j] << endl;
            // for(char ch: substrings[i]){
            //     m[ch]++;
            // }
            // // cout<< "first: \n";
            // // print_map(m);
            // for(char ch: substrings[j]){
            //     m[ch]--;
            // }
            for(char ch:substrings[j]){
                t[ch]++;
            }
            // cout<< "\nafter: \n";
            // print_map(m);
            // for(auto it=m.begin();it!=m.end();++it){
            //     if(it->second!=0){
            //         ok=false;
            //         break;
            //     }
            // }
            if(t==m)
                c++;
            // // cout<< "\nfinal: \n";
            // print_map(m);
            // cout<< "Is ok? " << ((ok)?("yes"):("no")) << endl;
            // if(ok){
            //     c++;
            // }
        }
    }
    cout << c << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--) {
        solve();
    }
    // for(string x:get_substrings(string("abba"))){
    //     // cout<< x << endl;
    // }
    // // cout<< string("aakash").substr(0,0) << string("aakash").substr(3,2) << endl;
    // // cout<< "last: " << string("aakash").substr(5) << endl;
    return 0;
}
