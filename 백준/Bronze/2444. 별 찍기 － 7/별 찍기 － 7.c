#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int stars = 1;
    int spaces = n-1;
    int cnt = 1;
    int temp = -1;
    while(cnt!=2*n){
        for(int i = 0; i < spaces; i++)
            printf(" ");
        
        for(int i = 0; i < stars; i++)
            printf("*");
        
        if(cnt <= (2*n) - 1)printf("\n");
        
        spaces += temp;
        stars += 2*(-temp);
        
        if (spaces == 0) temp = 1;
        ++cnt;
    }
}