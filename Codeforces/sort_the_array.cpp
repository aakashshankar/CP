#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

// void check_reverse(vector<int> a, vector<int> b, int l, int r){
//     vecto
//     for(int i=l;i<=r;++i)
// }

int main() {
    ios::sync_with_stdio(0);
    int n;
    bool flag=false;
    cin >> n;
    vector<int> a;
    int x,i=0;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    vector<int> b=a;
    sort(a.begin(), a.end());
    for(int i=0;i<n;++i){
        if(a[i]!=b[i])
            flag=true;
    }
    if(!flag){
        cout << "yes\n" << 1 << " " << 1;
        return 0;
    }
    while(i<n && a[i]==b[i])
        i++;
    auto l=b.begin()+i;
    auto r=find(l, b.end(), a[i]);
    // cout << l-b.begin() << r-b.begin() << endl;
    reverse(l,r+1);
    // for(int i=0;i<n;++i)
    //     cout << b[i] << " ";
    cout << endl;
    for(int i=0;i<n;++i){
        if(a[i]!=b[i]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes\n" << l-b.begin()+1 << " " << r-b.begin()+1;
}
