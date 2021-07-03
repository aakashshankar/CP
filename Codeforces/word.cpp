#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int l=0,u=0;
    for(auto i:s){
        if(i>='A' && i<='Z')
            u++;
        else
            l++;
    }
    if(l>=u){
        for(int i=0;i<s.length();++i)
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=32;
    }else{
        for(int i=0;i<s.length();++i)
            if(s[i]>='a' && s[i]<='z')
                s[i]-=32;
    }
    cout << s << endl;
    return 0;
}
