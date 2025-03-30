#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string input;
    int radix;
    int length;
    int sum = 0;
    
    cin >> input;
    scanf("%d", &radix);
    
    length = input.length();
    
    // 0 <= a < length
    // length - 1 >= b >= 0
    for(int a = 0, b = length - 1; a < length; a++, b--){
        int num = input[a];
        
        // A ~ Z
        if(num >= 65) num -= 55;
        // 0 ~ 9(string)
        else num = input[a] - 48;
        
        sum += num * pow(radix, b);
    }
    
    printf("%d", sum);
    return 0;
}
