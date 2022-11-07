#include <stdio.h>
#include <math.h>

int main(){
    
    long long int a,b, sum;
    scanf("%lld %lld", &a, &b);
    sum = a-b;
    
    printf("%lld", sum < 0 ? -sum : sum);
}