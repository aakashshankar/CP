#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

int gcd(int a, int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}

float get_curious(int num, int denom){
    if(num%10==denom%10){
        num/=10;
        denom/=10;
    }else if(num%10==denom/10){
        num/=10;
        denom%=10;
    }else if(num/10==denom%10){
        num%=10;
        denom/=10;
    }else if(num/10==denom/10){
        num%=10;
        denom%=10;
    }else{
        return 0.0f;
    }
    return ((float)num/denom);
}

int main(){
    ios::sync_with_stdio(0);
    // int c=0;
    int num=1,denom=1;
    for(int i=11;i<=99;++i){
        if(i%10==0)
            continue;
        for(int j=i+1;j<=99;++j){
            if(j%10==0)
                continue;
            if(((float)(i)/j)==get_curious(i,j)){
                num*=i;
                denom*=j;
                // c++;
            }
        }
    }

    cout << denom/gcd(num,denom) << endl;
    return 0;
}
