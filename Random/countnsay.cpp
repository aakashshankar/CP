#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

string countAndSay(int n) {
        if(n==1){
            return "1";
        }else if(n==2){
            return "11";
        }else{
            string ans="", t=countAndSay(n-1);
            int i=0;
            while(i<t.length()){
                int c=i;
                char ch=t[i];
                while(i<t.length()-1 && t[i]==t[i+1]){
                    // c++;
                    i++;
                }
                ans+=to_string(i-c+1)+ch;
                i++;
                // i+=c;
            }
            return ans;
        }
    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout << countAndSay(3) << endl;
    return 0;
}
