#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    int radix;
    vector<char> v;
    vector<char>::reverse_iterator iter; //역방향 순회자
    
    scanf("%d %d", &num, &radix);
    
    while(num){
        int digit = num % radix;
        if(digit >= 10) digit += 55;
        else digit += 48;
        v.push_back((char)digit);
        num /= radix;
    }
    
    
    for(iter = v.rbegin(); iter != v.rend() ; iter++){
        char c;
        printf("%c", *iter);
    }
    
    return 0;
}
