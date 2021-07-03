#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

const int maxn=1000;

vector<int> BFS(vector<int> a[maxn], int n, int src){
    queue<int> q;
    q.push(src);
    vector<bool> visited;
    vector<int> costs;
    int active_node;
    for(int i=0;i<n;++i){
        visited.push_back(false);
        costs.push_back(0);
    }
    visited[src]=true;
    while(!q.empty()){
        active_node=q.front();
        q.pop();
        for(int v:a[active_node]){
            if(!visited[v]){
                visited[v]=true;
                costs[v]=costs[active_node]+6;
                q.push(v);
            }
        }
    }
    return costs;
}

void solve(){
    int u,v,n,m,src;
    vector<int> a[maxn], costs;
    cin >> n >> m;
    for(int i=0;i<n;++i)
        a[i].clear();
    for(int i=0;i<m;++i){
        cin >> u >> v;
        a[u-1].push_back(v-1);
        a[v-1].push_back(u-1);
    }
    cin >> src;
    costs=BFS(a,n,src-1);
    for(int i=0;i<costs.size();++i){
        if(i==src-1)
            continue;
        if(costs[i]==0)
            cout << -1 << " ";
        else
            cout << costs[i] << " ";
        // cout << costs[i] << "\t";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--)
        solve();
    return 0;
}
