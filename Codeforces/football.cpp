#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s,t1="",t2="";
    vector<string> a;
    cin >> s;
    t1=s;
    a.push_back(s);
    for(int i=0;i<n-1;++i){
        cin >> s;
        a.push_back(s);
        if(s==t1){
            continue;
        }
        t2=s;
    }
    int g1=count(a.begin(), a.end(), t1), g2=count(a.begin(), a.end(), t2);
    cout << ((g1>g2)?(t1):(t2)) << endl;
    return 0;
}
