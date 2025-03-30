#include <iostream>

using namespace std;


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
        a--, b--;
        while(a < b){
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            
            a++, b--;
        }
        
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}