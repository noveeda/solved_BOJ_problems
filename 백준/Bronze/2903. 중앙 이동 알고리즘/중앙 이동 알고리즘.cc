#include <iostream>

using namespace std;

int main(){
    int points = 2;
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        points = points + points - 1;
    }
    
    printf("%d", points*points);
    
    return 0;
}