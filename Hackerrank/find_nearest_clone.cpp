#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'
const int INF=1e8;
using namespace std;

vector<int> bfs(vector<list<int>> a, int n, int src){
    vector<bool> visited(n, false);
    vector<int> costs(n, INF);
    visited[src]=true;
    queue<int> q;
    costs[src]=0;
    q.push(src);
    int u,k=0;
    int c=0;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(int v:a[u]){
            if(!visited[v]){
                visited[v]=true;
                costs[v]=costs[u]+1;
                q.push(v);
                c++;
            }
        }
        k++;
    }
    cout << k << endl;
    costs[src]=INF;
    return costs;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int m,n;
    cin >> n >> m;
    vector<list<int>> a(n);
    int x,y;
    for(int i=0;i<m;++i){
        cin >> x >> y;
        a[x-1].push_back(y-1);
        a[y-1].push_back(x-1);
    }
    vector<int> colors;
    for(int i=0;i<n;++i){
        cin >> x;
        colors.push_back(x);
    }
    int id;
    cin >> id;
    vector<int> sources;
    for(int i=0;i<colors.size();++i){
        if(colors[i]==id){
            sources.push_back(i);
        }
    }
    int min=INF;
    vector<int> costs(n, INF);
    for(int src:sources){
        costs=bfs(a,n,src);
        for(int i=0;i<costs.size();++i){
            if(colors[i]==id){
                min=std::min(min, costs[i]);
            }
        }
    }
    cout << ((min==INF)?(-1):(min)) << endl;
    return 0;
}
