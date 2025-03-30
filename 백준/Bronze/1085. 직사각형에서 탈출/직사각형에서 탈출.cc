#include <iostream>

using namespace std;

int main(){
    int x, y, w, h, min = 1000;
    int arr[4];
    cin >> x >> y >> w >> h;
    
    arr[0] = x;
    arr[1] = w - x;
    arr[2] = y;
    arr[3] = h - y;
    
    for(int i = 0; i < 4; i++){
        if(min > arr[i]) min = arr[i];
    }
    
    cout << min;
    return 0;
}