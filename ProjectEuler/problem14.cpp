#include <bits/stdc++.h>
using namespace std;

int get_collatz_count(long n){
    int c=1;
    while(n!=1){
        if(n%2==0)
            n/=2;
        else
            n=(3*n+1);
        c++;
    }
    return c;
}

int main(int argc, char **argv){
    // cout << get_collatz_count(13) << endl;
    long i=13,max_count=10,c;
    while(i<1000000){
        c=get_collatz_count(i);
        if(c>max_count){
            cout << i << " " << c << endl;
            max_count=c;
        }
        i++;
    }
    return 0;
}
