#include <stdio.h>

int main(){
  int n,cnt = 0;
    while(scanf("%d", &n) != EOF){
        if(n > 0 ) cnt++;
    }
    
    printf("%d", cnt);
}