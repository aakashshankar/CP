#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    char x;
    cin >> n;
    string brides, grooms;
    cin >> brides >> grooms;
    if(count(brides.begin(), brides.end(),'r')==count(grooms.begin(), grooms.end(),'r') && count(brides.begin(), brides.end(), 'm')==count(grooms.begin(), grooms.end(), 'm')){
        cout << 0 << endl;
        return 0;
    }
    int unmatched=n;
    for(long unsigned int i=0;i<brides.length();++i){
        auto it=grooms.find(brides[i]);
        if(it==string::npos){
            // cout << unmatched << endl;
            break;
        }
        brides.erase(i,1);
        i--;
        grooms.erase(it,1);
        // cout << "brides: " << brides.length() << " grooms: " << grooms.length() << endl;
    }
    cout << brides.length() << endl;
    return 0;
}
