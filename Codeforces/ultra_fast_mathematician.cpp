#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

string exor(string a, string b){
    string x="";
    for(int i=0;i<a.length();++i){
        if(a[i]!=b[i])
            x+='1';
        else
            x+='0';
    }
    return x;
}

int main(){
    ios::sync_with_stdio(0);
    string a, b;
    cin.getline(a);
    cin.getline(b)
    // c=exor(a,b);
    cout << exor(a,b) << endl;
    return 0;
}
