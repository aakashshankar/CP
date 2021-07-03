#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<char> a={'a','a','k','a','s','h'};
    auto it=a.begin();
    a.insert(it, 'x');
    // it++;
    it=a.begin()+1;
    a.insert(it, 'y');
    for(char ch: a){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}
