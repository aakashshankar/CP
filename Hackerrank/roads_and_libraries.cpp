#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

const int INF=1e8;

using namespace std;


// int get_min(int t, int n, int clib, int croad){
//     int min=INF;
//     for(int i=0;i<=t;++i){
//         min=std::min(min, clib*n+croad*i);
//         n--;
//     }
//     return min;
// }

void dfs(vector<vector<int>> a, vector<bool>& visited, int u, int& nodes){
    visited[u]=true;
    nodes++;
    for(int v:a[u]){
        if(!visited[v]){
            dfs(a, visited, v, nodes);
        }
    }
}

// int bfs(vector<vector<int>> a, vector<bool>& visited, int n, int src){
//     queue<int> q;
//     q.push(src);
//     visited[src]=true;
//     int u,c=0;
//     while(!q.empty()){
//         u=q.front();
//         q.pop();
//         for(int v:a[u]){
//             if(!visited[v]){
//                 visited[v]=true;
//                 q.push(v);
//             }
//         }
//         c++;
//     }
//     return c;
// }

void solve() {
    int n,m,clib,croad,x,y,src=0;
    ll min_t=0;
    int nodes=0, edges=0;
    cin >> n >> m >> clib >> croad;
    vector<vector<int>> a(n);
    for(int i=0;i<m;++i){
        cin >> x >> y;
        a[x-1].push_back(y-1);
        a[y-1].push_back(x-1);
    }
    vector<bool> visited(n, false);
    // t=bfs(a, visited, n, src, nv);
    // cout << nv << endl;
    for(int i=0;i<n;++i){
        if(!visited[i]){
            nodes=0;
            dfs(a, visited, i, nodes);
            // nodes=bfs(a, visited, n, i);
            min_t+=(clib+(nodes-1)*croad);
        }
    }
    cout << std::min(min_t, (ll)clib*n) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}
