#include <iostream>

using namespace std;

int main(){
    int n, change;
    
    scanf("%d", &n);
    
    for(int c = 0; c < n; c++){
        int arr[4] = {25, 10, 5, 1};
        
         scanf("%d", &change);
        
        for(int i = 0; i < 4; i++){
            int temp = change / arr[i];
            change %= arr[i];
            arr[i] = temp;
        }
        
        for(int i = 0; i < 4; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    
    return 0;
}