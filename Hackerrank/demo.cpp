#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    vector<int> a;
    set<int> b;
    int x;
    b.insert(0);
    for(auto i=b.begin();i!=b.end();++i)
        cout << *i << '\t';
    cout << *b.lower_bound(4) << endl;
    cout << endl;
    return 0;
}
