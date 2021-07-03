#include <bits/stdc++.h>
using namespace std;

long factorial(long n){
    long prod=1;
    for(long i=n;i>=1;i--)
        prod*=i;
    return prod;
}

int g(long n, long m){
    long choose=factorial(n)/(factorial(n-m)*factorial(m));
    //cout << choose << endl;
    int x=0;
    while(choose%2==0){
        x++;
        choose/=2;
    }
    return x;
}

long F(long n){
    int max=0;
    for(long i=0;i<n;i++){
        for(long j=0;j<=i;j++){
            if(g(i,j)>max)
                max=g(i,j);
        }
    }
    return max;
}

int main(){
    cout << F(100);
    return 0;
}
