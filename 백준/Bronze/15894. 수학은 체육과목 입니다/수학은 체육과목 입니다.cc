#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    if(n == 1){
        printf("4");
        return 0;
    }
    
    long long res = 2*n + 1 + n-1 + n;
    printf("%lld", res);
    return 0;
}
