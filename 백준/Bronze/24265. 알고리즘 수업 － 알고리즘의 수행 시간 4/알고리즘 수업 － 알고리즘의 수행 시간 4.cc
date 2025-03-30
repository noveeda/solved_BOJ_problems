#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    
    long cnt = 0;
    for(int i = 1; i <= n-1; i++)
        for(int j = i+1; j <= n; j++)
            ++cnt;
    printf("%ld\n%d", cnt, 2);
}