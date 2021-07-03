#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;


void DFS_recursive(vector<int> a[], int active_node, vector<bool>& visited){
    // Do not need to set visited of the source to true, can call function directly
    visited[active_node]=true;
    cout << active_node+1 << " ";
    for(int v:a[active_node]){
        if(!visited[v]){
            DFS_recursive(a,v,visited);
        }
    }
}

void DFS_iterative(vector<int> a[], int n, int src){
    stack<int> s;
    s.push(src);
    vector<bool> visited(n,false);
    int active_node;// first;
    // visited[src]=true;

    while(!s.empty()){
        active_node=s.top();
        s.pop();
        if(!visited[active_node]){
            cout << active_node+1 << " ";
            visited[active_node]=true;
        }
        // first=1;
        for(int v:a[active_node]){
            if(!visited[v]){
                s.push(v);
                // visited[v]=true;
            }
        }
    }
    cout << endl;
}

void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i] << "\t";
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i] << "\t";
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cout << "Enter no of vertices: ";
    int n;
    cin >> n;
    cout << "Enter no of edges: ";
    int m;
    cin >> m;
    vector<int> a[n];
    vector<bool> visited;
    for(int i=0;i<n;++i){
        a[i].clear();
        visited.push_back(false);
    }
    cout << "Enter u and v for the edge between and u and v (bidirectional) in the graph: ";
    int u,v;
    for(int i=0;i<m;++i){
        cin >> u >> v, --u, --v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cout << "Enter the source node: ";
    int src;
    cin >> src;
    DFS_recursive(a,src-1,visited);
    cout << endl;
    DFS_iterative(a,n,src-1);
    return 0;
}
