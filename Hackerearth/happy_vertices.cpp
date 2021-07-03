#include <bits/stdc++.h>
#define endl '\n'
#define ll long long;

using namespace std;

// int no_of_children(vector<int> a[], int v){
//     int co=0;
//     for(
//     return co;
// }
//
// void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
//     if(end==0)
//         end=a.size();
//     if(!reverse){
//         for(auto i=start;i<end;i++){
//             cout << a[i];
//         }
//     }else{
//         for(auto i=end-1;i>=start;i--){
//             cout << a[i];
//         }
//     }
//     cout << endl;
// }
int main(){
    ios::sync_with_stdio(0);
    int n,m,x,y,happy=0,p,c;
    cin >> n >> m;
    vector<int> a[n];
    for(int i=0;i<n;++i){
        a[i].clear();
    }
    for(int i=0;i<m;++i){
        cin >> x >> y;
        a[x-1].push_back(y-1);
    }
    for(int i=0;i<n;++i){
        // cout << i << " -> ";
        // print_vector(a[i]);
        p=a[i].size();
        // cout << p << "->";
        for(int j:a[i]){
            // print_vector(a[j]);
            // cout << a[j].size()-1 << " ";
            if(p<a[j].size()){
                happy++;
                break;
            }
        }
        // cout << endl;
    }
    cout << happy << endl;
    return 0;
}
