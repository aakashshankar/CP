#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int maxN=1e4;


// void print_matrix(vector<int> a[maxN], int n) {
//     for(int i=0;i<n;++i){
//         for(int j=0;j<n;++j)
//             cout << a[i][j] << '\t';
//         cout << endl;
//     }
// }


int bfs(vector<int> a[maxN], int n, int src=0){
    int active_node;
    vector<bool> visited;
    queue<int> q;
    q.push(src);
    vector<int> cost;
    for(int i=0;i<n;++i){
        visited.push_back(false);
        cost.push_back(0);
    }
    visited[src]=true;
    // cost[src]=0;
    while(!q.empty()){
        active_node=q.front();
        q.pop();
        for(int i:a[active_node]){
            if(!visited[i]){
                visited[i]=true;
                cost[i]=cost[active_node]+1;
                q.push(i);
            }
        }
    }
    return cost[cost.size()-1];
}

void solve(){
    vector<int> a[maxN];
    int n,m;
    int x,y;
    cin >> n >> m;
    for(int i=0;i<n;++i)
        a[i].clear();
    for(int i=0;i<m;++i){
        cin >> x >> y;
        a[x-1].push_back(y-1);
        a[y-1].push_back(x-1);
    }
    // print_matrix(a,n);
    int cost;
    cost=bfs(a,n);
    cout << cost << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
