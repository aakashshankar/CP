#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int N,A,B,t1,t2;
    cin >> N >> t1 >> t2;
    (t1>=t2)?(A=t1,B=t2):(A=t2,B=t1);
    vector<int> x;
    for(int i=0;i<N;++i){
        cin >> t1;
        x.push_back(t1);
    }
    vector<int> res=solve(x, N, A, B);
    for(int i:res){
        cout << i << endl;
    }
    // cout << endl;
    return 0;
}
