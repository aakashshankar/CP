#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,x;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;++i){
        std::cin >> x;
        a.push_back(x);
    }
    int i=0;
    // while(i<a.size()){
    //     int t=a[i];
    //     i++;
    //     cout << "t: " << t << endl;
    //     auto it=a.begin();
    //     while(i<a.size() && a[i]==t){
    //         cout << a[i] << " ";
    //         a.erase(it+i);
    //         // i++;
    //         // cout << a[i] << " ";
    //         // i++;
    //     }
    //     cout << "\ni: " << i << endl;
    //     // i++;
    //     // cout << endl;
    // }
    cout << distance(a.begin(), unique(a.begin(), a.end())) << endl;
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
