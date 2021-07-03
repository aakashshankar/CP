#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

vector<int> dijkstra(vector<list<int>> adj, vector<int>& weight, int src, int n){
    vector<bool> visited(n, false);
    vector<int> dist(n+1, INT_MAX);
    priority_queue<int, vector<int>, greater<int>> pq;
    dist[src]=0;
    pq.push(0);
    while(!pq.empty()){
        int u=pq.top();
        pq.pop();
        cout << "current node: " << u << endl;
        visited[u]=true;
        for(int v:adj[u]){
            if(dist[v]>dist[u]+weight[u]){
                dist[v]=dist[u]+weight[u];
                pq.push(v);
            }
        }
    }
    return dist;
}

vector<list<int>> getAdj(vector<int> a, int n){
    vector<list<int>> adj(n+1);
    adj[0].push_back(2);
    for(int i=1;i<n-1;++i){
        adj[i].push_back(i-1);
        adj[i].push_back(i+2);
    }
    adj[n-1].push_back(n-2);
    adj[n-1].push_back(n);
    return adj;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    vector<list<int>> adj=getAdj(a, n);
    for(int i=0;i<=n;++i){
        cout << i << ": ";
        for(int p: adj[i]){
            cout << p << '\t';
        }
        cout << endl;
    }
    vector<int> dist=dijkstra(adj, a, 0, n);
    cout << dist[n] << endl;
    return 0;
}
