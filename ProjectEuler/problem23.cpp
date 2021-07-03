#include <bits/stdc++.h>

using namespace std;

long sumOfDivisors(long n){
    int c=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i)
                c+=i;
            else
                c+=(i+n/i);
        }
    }
    return c;
}



bool isAbundant(long n){
    return (sumOfDivisors(n)>n)?(true):(false);
}

// bool in(vector<int> a, int k){
//     sort(a.begin(),a.end());
//     int low=0,high=a.size()-1,mid;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(a[mid]==k){
//             return true;
//         }else if(a[mid]<k){
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     return false;
// }

// bool isPerfect(long n){
//     return (sumOfDivisors(n)==n)?(true):(false);
// }
//
// bool isDeficient(long n){
//     return (sumOfDivisors(n)<n)?(true):(false);
// }

void printVector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i] << " ";
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    long sum=0;
    vector<int> abundant;
    vector<bool> marked;
    for(int i=0;i<28123;i++)
        marked.push_back(false);
    for(long i=2;i<=28123;i++){
        if(isAbundant(i))
            abundant.push_back(i);
    }
    for(int i=0;i<abundant.size();i++){
        for(int j=i;j<abundant.size();j++){
            if(abundant[i]+abundant[j]<=28123){
                marked[abundant[i]+abundant[j]]=true;
            }
        }
    }
    for(auto i=0;i<marked.size();i++){
        if(!marked[i]){
            sum+=i;
        }
    }
    cout << sum << endl;
    // printVector(abundant);
    // cout << sum_of_n_integers(28123) <<endl;
    return 0;
}
