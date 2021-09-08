#include <iostream>

using namespace std;

int main(){

    int n, k, dg[10], r=0;
    cin >> n >> k;
    
    for(int i = n-1; i >= 0; i--){ // 10 9 8 ... 3 2 1
        cin >> dg[i];
    }
    
    for(int i = 0; i < n; i++){// 1 2 3... 8 9 10
        r += k / dg[i];
        k = k % dg[i];
    }
    cout << r;
}