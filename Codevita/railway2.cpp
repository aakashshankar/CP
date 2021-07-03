#include <bits/stdc++.h>
using namespace std;

int findPlatform(vector<int> arr, vector<int>dep, int n){
   sort(arr.begin(), arr.end());
   sort(dep.begin(), dep.end());
   int plat_needed = 1, result = 1;
   int i = 1, j = 0;
   while (i < n && j < n){
        if (arr[i] <= dep[j]){
            plat_needed++;
            i++;
            if (plat_needed > result)
                result = plat_needed;
        }else{
            plat_needed--;
            j++;
        }
   }
   return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> dep(n);
    int x,y;
    for(int i=0;i<n;++i){
        cin >> x >> y;
        arr[i]=x;
        dep[i]=x+y;
    }
    cout << findPlatform(arr, dep, n);
    return 0;
}
