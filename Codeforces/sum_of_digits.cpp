#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

long sum_of_digits(string x){
    long s=0;
    for(char ch:x){
        s+=(ch-'0');
    }
    return s;
}

long sum_of_digits(int x){
    long c=0;
    while(x){
        c+=(x%10);
        x/=10;
    }
    return c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    if(s.length()==1){
        cout << 0 << endl;
        return 0;
    }
    long n=sum_of_digits(s);
    int c=1;
    while(n>=10){
        n=sum_of_digits(n);
        c++;
    }
    cout << c << endl;
    return 0;
}
