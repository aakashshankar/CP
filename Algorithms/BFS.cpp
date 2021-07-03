#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

bool all_visited(vector<bool>& visited){
    for(int i=0;i<visited.size();++i){
        if(visited[i]==false)
            return false;
    }
    return true;
}
void print_matrix(int a[100][100], int n) {
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            cout << *(*(a+i)+j) << '\t';
        cout << endl;
    }
}

void bfs(int a[100][100], int n, int src){
    vector<bool> visited;
    for(int i=0;i<n;++i)
        visited.push_back(false);
    visited[src]=true;
    int active_node;
    queue<int> q;
    q.push(src);
    cout << src << " ";
    while(!all_visited(visited)){
        active_node=q.front();
        q.pop();
        for(int i=0;i<n;++i){
            if(a[active_node][i]==1  && visited[i]==false){
                visited[i]=true;
                q.push(i);
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    int n;
    cout << "Enter no of vertices: ";
    cin >> n;
    int src, a[100][100];
    cout << "Enter the graph: \n";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    print_matrix(a,n);
    cout << "Enter starting vertex: ";
    cin >> src;
    bfs(a, n, src);
    return 0;
}
