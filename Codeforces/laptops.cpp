#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

struct laptop{
    int price;
    int quality;
};

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    // vector<vector<int>> a;
    vector<laptop> a;
    laptop o;
    for(int i=0;i<n;++i){
        cin >> o.price >> o.quality;
        // for(int j=0;j<a.size();++j){
        //     if(a[j][0]<x && a[j][1]>y){
        //         cout << "Happy Alex" << endl;
        //         return 0;
        //     }
        // }
        // a.push_back({x,y});
        a.push_back(o);
    }
    sort(a.begin(), a.end(), [&](laptop& l, laptop& r){return l.price<r.price;});
    for(int i=0;i<a.size()-1;++i){
        if(a[i].quality>a[i+1].quality){
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
