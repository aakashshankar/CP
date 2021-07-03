#include <bits/stdc++.h>

using namespace std;


int digit_sum(vector<int> digits){
    int sum=0;
    for(auto i=digits.begin();i!=digits.end();i++)
        sum+=*i;
    return sum;
}

// int reverse(int n){
//     int x=0;
//     while(n!=0){
//         int rem=n%10;
//         x=(x*10+rem);
//     }
//     return x;
// }

long long p(int x, int y){
    long long ans=1;
    for(int i=0;i<y;i++){
        ans*=x;
        cout << ans << endl;
    }
    return ans;
}

void get_ans(){
    long long a=p(2,1000);
    int sum=0;
    while(a!=0){
        sum+=(a%10);
        a/=10;
    }
    cout << sum << endl;
}
vector<int> power_of_2(int y){
    vector<int> digits;
    long num=2;
    short carry;
    digits.push_back(num);
    for(int i=0;i<y-1;i++){
        carry=0;
        for(auto j=0;j<digits.size();j++){
            digits[j]*=2;
            digits[j]+=carry;
            // digits[j]*=2;
            if(digits[j]>=10){
                carry=1;
                digits[j]%=10;
            }else{
                carry=0;
            }
        }
        if(carry==1)
            digits.push_back(1);
    }
    // digits[digits.size()-1]=reverse(digits[digits.size()-1]);
    return digits;
}

void printVector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i];
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i];
        }
    }
    cout << endl;
}

int main(){
    // for(int i=0;i<50;i++)
    //     cout << pow(2,i) << " " << digit_sum(pow(2,i)) <<endl;
    printVector(power_of_2(1000),true);
    // cout << endl;
    cout << digit_sum(power_of_2(1000)) << endl;
    // get_ans();
    return 0;
}
