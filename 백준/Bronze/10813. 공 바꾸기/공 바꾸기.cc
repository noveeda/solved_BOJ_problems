#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n,m;
    cin >> n >> m;
    
    int* arr = new int[n];
    
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        swap(&arr[a-1], &arr[b-1]);
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}