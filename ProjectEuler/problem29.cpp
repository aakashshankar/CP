#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;


// bool in(vector<vector<int>> b, vector<int> temp){
//     int c;
//     for(auto i=b.begin();i!=b.end();++i){
//         if((*i).size()==temp.size()){
//             c=0;
//             for(int j=0;j<temp.size();++j)
//                 if((*i)[j]==temp[j])
//                     c++;
//             if(c==temp.size())
//                 return true;
//         }
//         // return true;
//     }
//     return false;
// }




vector<int> x_power_y(int x, int y){
    vector<int> digits;
    long num=x;
    short carry;
    while(num){
        digits.push_back(num%10);
        num/=10;
    }
    for(int i=0;i<y-1;i++){
        carry=0;
        for(auto j=0;j<digits.size();j++){
            digits[j]*=x;
            digits[j]+=carry;
            // digits[j]*=2;
            if(digits[j]>=10){
                // carry=1;
                carry=digits[j]/10;
                digits[j]%=10;
            }else{
                carry=0;
            }
        }
        while(carry){
            digits.push_back(carry%10);
            carry/=10;
        }
    }
    // digits[digits.size()-1]=reverse(digits[digits.size()-1]);
    return digits;
}

void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
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
    ios::sync_with_stdio(0);
    set<vector<int>> a;
    // vector<vector<int>> b;
    // vector<int> temp;
    // print_vector(x_power_y(8,2),true);
    for(int i=2;i<=100;++i){
        for(int j=2;j<=100;++j){
            a.insert(x_power_y(i,j));
        }
    }
    // for(int i=2;i<=100;++i){
    //     for(int j=2;j<=100;++j){
    //         // print_vector(x_power_y(i,j),true);
    //         // a.insert(x_power_y(i,j));
    //         temp=x_power_y(i,j);
    //         // in(b,temp);
    //         if(!in(b,temp))
    //             b.push_back(temp);
    //     }
    // }
    // for(auto i=b.begin();i!=b.end();++i){
    //     for(int j=(*i).size()-1;j>=0;--j){
    //         cout << (*i)[j];
    //     }
    //     cout << endl;
    // }
    // temp={3,4,2};
    // print_vector(x_power_y(26,2));
    // cout << x_power_y(26,2).size() << endl;
    // (in(b,temp))?(cout << "yes" << endl):(cout << "no" << endl);
    cout << a.size() << endl;
    // cout << get_no_of_digits(434423) << endl;
    return 0;
}
