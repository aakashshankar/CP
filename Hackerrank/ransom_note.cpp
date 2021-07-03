#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int m,n;
    cin >> m >> n;
    string x;
    // vector<string> magazine;
    vector<string> note;
    unordered_map<string, int> magazine;
    for(int i=0;i<m;++i){
        cin >> x;
        magazine[x]++;
        // magazine.push_back(x);
    }
    for(int i=0;i<n;++i){
        cin >> x;
        magazine[x]--;
        if(magazine[x]<0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
