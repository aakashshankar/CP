#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;


void printMap(unordered_map<int, int> m){
    cout << "key\tvalue\n";
    for(unordered_map<int, int>::iterator it=m.begin();it!=m.end();++it){
        cout << it->first << "\t" << it->second << endl;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int x,n;
    cin >> n;
    int s2=0,s4=0;
    unordered_map<int, int> m,f;
    for(int i=0;i<n;++i){
        cin >> x;
        m[x]++;
    }
    // loadSum(m,s2,s4);
    for(auto it=m.begin();it!=m.end();++it){
        s2+=(it->second/2);
        s4+=(it->second/4);
    }
    int q;
    cin >> q;
    char c1;
    int val;
    while(q--){
        cin >> c1 >> val;
        s2-=m[val]/2, s4-=m[val]/4;
        switch(c1){
            case '+':
                m[val]++;
            break;
            default:
                m[val]--;
        }
        s2+=m[val]/2, s4+=m[val]/4;
        cout << ((s2>=4 && s4>=1)?("YES"):("NO")) << endl;
    }
    return 0;
}
