#include <stdio.h>

int main(){
    int total, n, a, b, temp = 0;
    
    scanf("%d", &total);
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        temp += a*b;
    }
    
    printf("%s", total == temp ? "Yes" : "No");
}