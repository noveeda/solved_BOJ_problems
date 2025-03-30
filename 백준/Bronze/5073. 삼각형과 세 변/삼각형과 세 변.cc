#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    int a, b, c;
    string out[4] = {"Invalid", "Equilateral", "Isosceles", "Scalene"};
    
    while(true){
        int flag = 0; // 0: Invalid, 1: Equilateral, 2: Isosceles, 3: Scalene
        scanf("%d %d %d", &a, &b, &c);
    
        if(a == 0 || b == 0 || c == 0) return 0;
        
        if(a == b || a == c || b == c){
            if(a == b && a == c && b == c){
                flag = 1;
            }
            else{
                if(a == b && a + b > c){
                    flag = 2;
                }
                else if(a == c && a + c > b){
                    flag = 2;
                }
                else if(c == b && c + b > a){
                    flag = 2;
                }
            }
        }
        else{
            int arr[3] = {a,b,c};
            
            sort(arr, arr+3);
            
            if(arr[0] + arr[1] > arr[2]) flag = 3;
        }
        
        cout << out[flag] << "\n";
    }
    
    
    
}
