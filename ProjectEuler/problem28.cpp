#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
int a[1001][1001];

void generateMatrix(int arr[][1001], long n){
    long x=n*n,i=0,p=0;
    //cout << x;
    while(x>=1){
        for(int i=n-p-1;i>=p;i--){
            arr[p][i]=x;
            x--;
        }
        for(int i=p+1;i<n-p;i++){
            arr[i][p]=x;
            x--;
        }
        for(int i=p+1;i<n-p;i++){
            arr[n-p-1][i]=x;
            x--;
        }
        for(int i=n-p-2;i>=p+1;i--){
            arr[i][n-p-1]=x;
            x--;
        }
        p++;
    }
}

void printArray(int a[][1001], long n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << a[i][j] << '\t';
        cout << '\n';
    }
}

long diagonalSum(int a[][1001], long n){
    long sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sum+=a[i][j];
            else if(i+j==n-1)
                sum+=a[i][j];
        }
    }
    return sum;
}

int main(){
    cout << "Enter n: ";
    int n;
    cin >> n;
    generateMatrix(a,n);
    // printArray(a,n);
    cout << diagonalSum(a,n) << '\n';
    return 0;
}
