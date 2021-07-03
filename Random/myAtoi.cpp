#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int myAtoi(string str) {
      int i=0;
      while(str[i]==32){
          i++;
      }
      bool pos=true;
      if(str[i]=='+'){
          i++;
      }else if(str[i]=='-'){
          i++;
          pos=false;
      }
      // cout << pos << endl;
      int j=0,d=0;
      long num=0;
      string ans="";
      while(i<str.length()){
          if(str[i]<48 || str[i]>57){
              break;
          }
          ans+=str[i];
          i++;
      }
      if(ans==""){
          return 0;
      }
      while(j<ans.length() && ans[j]=='0'){
          j++;
      }
      // cout << "j: " << j << endl;
      ans=ans.substr(j);
      // cout << ans << endl;
      // if()
      d=ans.length();
      // cout << d << endl;
      // while(str)
      if(d>10){
          return (pos)?(INT_MAX):(INT_MIN);
      }
      for(int i=0;i<ans.length();++i){
          num+=(ans[i]-'0')*pow(10,d-1);
          // cout << num << endl;
          d--;
      }
      if(pos){
          if(num>=INT_MAX)
               return INT_MAX;
      }else{
          if(-num<=INT_MIN){
              return INT_MIN;
          }
      }
      return (pos)?(num):(-num);

  }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout << myAtoi("-2147483647") << endl;
    cout << INT_MIN << endl;
    return 0;
}
