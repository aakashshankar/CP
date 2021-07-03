#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

long getTriangularNumber(long n){
    return (n*(n+1))/2;
}

int getNoOfDivisors(long n){
    int c=2;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            if(n/i==i){
                c++;
            }else{
                c+=2;
            }
    return c;
}

int main(){
    int i=1;
    while(getNoOfDivisors(getTriangularNumber(i))<500){
        i++;
    }
    cout << getTriangularNumber(i) << endl;
    return 0;
}
