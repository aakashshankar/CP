#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int m,n;
    cin >> n >> m;
    int i=0;
    while(true){
        m-=(i+1);
        if(m<0){
            break;
        }
        i=(i+1)%n;
    }
    cout << m+(i+1) << endl;
    return 0;
}
