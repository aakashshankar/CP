#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// const long maxN=1e5;

// void accumulate_comp(int a[maxN], int n, int k, int& l, int& r){
//     // int l,r;
//     for(int i=0, j=n-1;i<n || j>=0;++i,--j){
//         if(a[i]==k){
//             l+=(i+1);
//         }
//         if(a[j]==k){
//             r+=(n-j);
//         }
//     }
//     // cout << l << r;
// }
//
// void print_array(int a[100000], int n){
//     for(int i=0;i<n;++i)
//         cout << a[i] << '\t';
//     cout << endl;
// }

int main(){
    ios::sync_with_stdio(0);
    long m,n,x;
    cin >> n;
    // set<int> s;
    long long a,comparisons[n+1];
    for(int i=0;i<n;++i){
        cin >> a;
        comparisons[a]=i+1;
    }
    // print_array(a,n);
    // print_array(comparisons,n);
    // for(int i=1;i<=n;++i)
        // cout << comparisons[i] << '\t';
    // cout << endl;
    cin >> m;
    int b;
    long long l=0,r=0;
    for(int i=0;i<m;++i){
        cin >> b;
        l+=comparisons[b];
        r+=(n-comparisons[b])+1;
        // r+=(n-l+1);
        // accumulate_comp(a,n,b[i],l,r);
    }
    // print_array(b,m);
    cout << l << " " << r << endl;
    return 0;
}
