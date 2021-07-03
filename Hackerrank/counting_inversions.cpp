#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

ll c=0;

void merge(int l, int m, int r, vector<int>& a){
    int n1=m-l+1, n2=r-m;
    vector<int> A,B;
    for(int i=0;i<n1;++i){
        A.push_back(a[l+i]);
    }
    for(int i=0;i<n2;++i){
        B.push_back(a[m+1+i]);
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            a[k]=A[i];
            i++;
        }else{
            a[k]=B[j];
            j++;
            c+=m-i+1;
        }
        k++;
    }

    while(i<n1){
        a[k]=A[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=B[j];
        j++;
        k++;
    }
    return c;
}

void mergesort(vector<int>& a, int l, int r){
    if(r>l){
        int m=(l+r)/2;
        cmergesort(a, l, m);
        mergesort(a, m+1, r);
        merge(l, m, r, a);
    }
}

void solve() {
    int n,x;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    c=0;
    mergesort(a, 0, n-1);
    for(int i:a){
        cout << i << " ";
    }
    cout << c << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int d;
    cin >> d;
    while(d--){
        solve();
    }
    return 0;
}
