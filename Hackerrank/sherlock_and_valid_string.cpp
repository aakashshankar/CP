#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    int commonFreq, val=INT_MIN;
    unordered_map<char, int> m;
    unordered_map<int, int> f;
    for(char ch:s){
        m[ch]++;
    }
    for(auto it=m.begin();it!=m.end();++it){
        f[it->second]++;
    }
    for(auto it=f.begin();it!=f.end();++it){
        if(it->second>val){
            commonFreq=it->first;
            val=it->second;
        }
    }
    // cout << commonFreq << endl;
    int c=0,g=0,l=0;
    for(auto it=m.begin();it!=m.end();++it){
        if(it->second==commonFreq+1)
            c++;
        if(it->second>commonFreq+1)
            g++;
        if(it->second==commonFreq-1)
            l++;
        cout << it->first << ": " << it->second << endl;
    }
    // cout << "Greater than immediate next: " << g << endl;
    // cout << "Equal to immediate next:  " << c << endl;
    // cout << "Equal to immediate previous: " << l << endl;
    if(g){
        cout << "NO" << endl;
    }else if(!c && !l){
        cout << "YES" << endl;
    }else{
        if((l==0 && c<=1) || (c==0 && l<=1)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
