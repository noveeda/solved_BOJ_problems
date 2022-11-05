#include <stdio.h>

int main(){
    int students[30] = {0};
    
    for(int i = 0; i < 28; i++){
        int studentNum;
        scanf("%d", &studentNum);
        students[studentNum - 1] = 1;
    }
    
    for(int i = 0; i < 30; i++){
        if(students[i] == 0) printf("%d\n", i+1);
    }
}