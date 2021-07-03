#include <bits/stdc++.h>
using namespace std;

bool check_armstrong(long n, int dig){
    int rem;
    long x=n,sum=0;
    while(n!=0){
        rem=n%10;
        sum+=pow(rem,dig);
        n/=10;
    }
    if(sum==x)
        return true;
    return false;
}

int main(){
    long long sum=0;
    for(long i=4150;i<=194979;++i){
        if(check_armstrong(i,5)){
            sum+=i;
            // cout << sum << endl;
            // break;
        }
        // cout << sum <<endl;
    }
    cout << sum << endl;
    return 0;
}
