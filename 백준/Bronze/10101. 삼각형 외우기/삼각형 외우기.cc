#include <iostream>

using namespace std;

int main()
{   
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b || a == c || b == c){
        if(a == b && a == c && b == c){
            printf("%s", (a+b+c) == 180 ? "Equilateral" : "Error");
        }
        else{
            printf("%s", (a+b+c) == 180 ? "Isosceles" : "Error");    
        }
    }
    else{
        printf("%s", (a+b+c) == 180 ? "Scalene" : "Error");
    }
}
