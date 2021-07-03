#include <bits/stdc++.h>
using namespace std;

int c=0;
int a[21][21];

int fill(int n){
    for(int i=0;i<n;i++){
        a[i][n]=1;
        a[n][i]=1;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            a[i][j]=a[i+1][j]+a[i][j+1];
        }
    }
    return a[0][0];
}

int main(){
    cout << fill(20) << endl;
    return 0;
}
