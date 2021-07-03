#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int maxn=1000;

struct edge{
    pair<int,int> uv;
    int weight;
};

void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i] << "\t";
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i];
        }
    }
    cout << endl;
}


int min_dist(vector<int>& dist, vector<bool>& visited){
    int min=INT_MAX, min_node;
    for(int i=0;i<dist.size();++i){
        if(dist[i]<min && !visited[i]){
            min=dist[i];
            min_node=i;
        }
    }
    return min_node;
}


string dijkstra(vector<int> a[], int& n, vector<int>& parent, vector<int>& dist, int& src, int& target){
    vector<bool> visited(n,false);
    dist.assign(n,999);
    // vector<int> path;
    for(int i=0;i<n;++i)
        parent.push_back(i);
    int active_node, k=0;
    dist[src]=0;
    while(k<n-1){
        active_node=min_dist(dist, visited);
        visited[active_node]=true;
        for(int i=0;i<n;++i){
            if(dist[i]>dist[active_node]+a[active_node][i]){
                dist[i]=dist[active_node]+a[active_node][i];
                parent[i]=active_node;
            }
        }
        k++;
    }
    string p="";
    int i=target;
    while(i!=src){
        p+=char(i+48);
        i=parent[i];
    }
    p+=char(src+48);
    return p;
    //return dist;
}

int second_shortest_path(vector<int> a[maxn], int& n, string& path, int& src, int& target){
    int min_distance=INT_MAX;
    vector<string> permutations;
    for(int i=2;i<=path.length();++i){
        for(int j=0;j<=path.length()-i;++j)
            permutations.push_back(path.substr(j,i));
    }
    // for(int i=0;i<permutations.size();++i)
    //     cout << permutations[i] << endl;
    vector<int> dist, parent;
    for(int i=0;i<permutations.size();++i){
        vector<int> b[maxn];
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                b[i].push_back(a[i][j]);
            }
        }
        for(int j=1;j<permutations[i].length();++j){
            int u=permutations[i][j-1]-48, v=permutations[i][j]-48;
            cout << "Edges removed are: " << endl;
            cout << u << "->" << v << endl;
            b[v][u]=999;
            b[u][v]=999;
        }
        string t=dijkstra(b,n,parent,dist,src,target);
        cout << "Shortest cost: " << dist[target] << endl;
        if(dist[target]==999)
            cout << "Shortest path: - " << endl;
        else
            cout << "Shortest path: " << t << endl;
        if(dist[target]<min_distance)
            min_distance=dist[target];
    }
    return min_distance;
}

int main() {
    ios::sync_with_stdio(0);
    int n,x,y,c;
    cout << "Enter no of vertices: ";
    cin >> n;
    cout << "Enter no of edges: ";
    int m;
    cin >> m;
    vector<int> a[maxn];
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            if(i==j)
                a[i].push_back(0);
            else
                a[i].push_back(999);

    for(int i=0;i<n;++i)
        print_vector(a[i]);
    cout << "Enter edge vertices and weights: \n";
    for(int i=0;i<m;++i){
        cin >> x >> y >> c;
        a[x][y]=c;
        a[y][x]=c;
    }
    cout << "Enter source: ";
    int src;
    cin >> src;
    cout << "Enter target: ";
    int target;
    cin >> target;
    vector<int> dist, parent;
    string p=dijkstra(a,n,parent,dist,src,target);
    // second_shortest_path(a,n,p);
    int ssp=second_shortest_path(a,n,p,src,target);
    cout << "Second shortest path: " << ssp << endl;
    return 0;
}
