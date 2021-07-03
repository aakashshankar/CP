#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void print_2d_vector(vector<float> a[]){
    for(int i=0;i<a->size();++i){
        for(int j=0;j<a[i].size();++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    vector<float> a[100];
    srand((unsigned)time(NULL));
    for(int i=0;i<100;++i){
        for(int j=0;j<10;++j){
            a[i].push_back((float)rand()/RAND_MAX);
        }
    }
    for(int i=0;i<10;++i){
        if(a[0][i]<0.1){
            a[0][i]=a[1][i];
        }
        if(a[99][i]<0.1){
            a[99][i]=a[98][i];
        }
    }
    // Straight up brute force
    for(int j=0;j<10;++j){
        for(int i=1;i<99;++i){
            if(a[i][j]<0.1){
                a[i][j]=(float)((a[i-1][j]+a[i+1][j])/2);
            }
        }
    }
    print_2d_vector(a);
    return 0;
}
