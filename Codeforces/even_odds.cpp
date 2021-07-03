#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    ll n,k;
    int j=0,i;
    cin >> n >> k;
    string s="";
    for(int i=1;i<=n;i+=2)
        s+=char(i+'0');
    for(int i=2;i<=n;i+=2)
        s+=char(i+'0');
    cout << s[k-1] << endl;
    return 0;
}
