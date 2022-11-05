#include <stdio.h>
#include <malloc.h>

int main(){
    int length, v, cnt = 0;
    int* arr;
    
    scanf("%d", &length);
    arr = (int*)malloc(sizeof(int) * length);
    
    for(int i = 0; i < length; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &v);
    
    for(int i = 0; i < length; i++)
        if(arr[i] == v) ++cnt;
    
    printf("%d", cnt);
}