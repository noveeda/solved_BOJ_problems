#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[3];
    
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    
}