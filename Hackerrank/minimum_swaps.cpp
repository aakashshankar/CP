#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    // int v[100005];
    int n;
    cin >> n;
    int x,c=0;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
        // if(x<i+1){
        //     swap(&a[x-1], &a[i]);
        //     c++;
        // }
    }
    if(std::is_sorted(a.begin(), a.end())){
        cout << 0 << endl;
        return 0;
    }
    vector<int> b=a;
    reverse(b.begin(), b.end());
    if(std::is_sorted(b.begin(), b.end())){
        cout << n/2 << endl;
        return 0;
    }
    int i=0;
    while(i<n){
        if(a[i]!=i+1){
            auto it=find(a.begin(), a.end(), i+1);
            swap(&a[i],&(*it));
            c++;
        }
        i++;
    }
    cout << c << endl;
    return 0;
}
