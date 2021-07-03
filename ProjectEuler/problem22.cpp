#include <bits/stdc++.h>
#include <iostream>
#define endl '\n'
#define ll long long

using namespace std;

int value(string str){
    int val=0;
    for(int i=1;i<str.length()-1;++i)
        val+=int(str[i]-64);
    return val;
}

int main(){
    ios::sync_with_stdio(0);
    ifstream fs;
    string str="";
    vector<string> v;
    fs.open("p022_names.txt", ios::in);
    while(!fs.eof()){
        // if(str!="\n"){
            getline(fs,str,',');
            v.push_back(str);
        // }
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();++i){
    //     cout << v[i] << endl;
    // }
    // cout << v[937] << endl;
    ll total=0;
    for(int i=0;i<v.size();++i){
        total+=(value(v[i])*(i+1));
    }
    cout << total << endl;
    return 0;
}
