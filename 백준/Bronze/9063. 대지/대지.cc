#include <iostream>

using namespace std;

int main()
{
    int p_cnt;
    int min_x = 10000, 
        max_x = -10000, 
        min_y = 10000, 
        max_y = -10000;
    
    scanf("%d", &p_cnt);
    
    for(int i = 0; i < p_cnt; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        
        if(a < min_x) min_x = a;
        if(b < min_y) min_y = b;
        if(a > max_x) max_x = a;
        if(b > max_y) max_y = b;
    }
    
    printf("%d", (max_x-min_x) * (max_y-min_y));
}
