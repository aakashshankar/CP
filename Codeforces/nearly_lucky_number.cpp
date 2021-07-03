#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool lucky(string n){
    int rem,c=0;
    for(int i:n){
        if(i=='4' || i=='7')
            c++;
    }
    if(c==4 || c==7)
        return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    string n;
    cin >> n;
    if(lucky(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
