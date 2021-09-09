#include <iostream>
#include <algorithm>
#include <malloc.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int* arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n, less<int>());
        
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }
}