#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s="";
    bool ok=true;
    int a,g,n;
    cin >> n;
    int pa=0, pg=0;
    for(int i=0;i<n;++i){
        cin >> a >> g;
        if(((pa+a)-pg)<=500){
            s+='A';
            pa+=a;
        }else if(((pg+g)-pa)<=500){
            s+='G';
            pg+=g;
        }else{
            ok=false;
        }
    }
    if(ok){
        cout << s << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}
