int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return -1;
    
    if (num1 > num2)  
        return 1;      
    
    return 0;    
}

int main(){
    int arr[1000], a, c;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, c, 4, compare);
    
    for(int i = 0; i < c; i++){
        printf("%d\n", arr[i]);
    }
}