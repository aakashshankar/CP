#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool isPowerOfThree(int n) {
    if(n==0)
        return 0;
    double a=log10(n)/log10(3);
    // cout << a << " " << floor(a) << endl;
    return (a-floor(a)==0);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << isPowerOfThree(n) << endl;
    return 0;
}
