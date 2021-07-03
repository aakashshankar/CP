#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int x=0,n;
    cin >> n;
    char s[3];
    while(n--){
        cin >> s;
        if(strcmp(s,"++X")==0 || strcmp(s,"X++")==0)
            x++;
        else
            x--;

    }
    cout << x << endl;
    return 0;
}
