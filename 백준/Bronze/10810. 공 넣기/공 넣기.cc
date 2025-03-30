#include <iostream>

using namespace std;

int main(){
    int n, m;
    
    cin >> n >> m;
    
    int *arr = new int[n];
    
    for(int t = 0; t < m; t++){
        int i,j,k;
        cin >> i >> j >> k;
        
        for(int idx = i-1; idx < j; idx++){
            arr[idx] = k;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}