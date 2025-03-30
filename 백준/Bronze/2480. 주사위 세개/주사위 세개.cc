#include <iostream>

using namespace std;

int main(){
    int a, b, c, res = 0;
    cin >> a >> b >> c;
    if(a == b && b == c){
        res = 10000 + a * 1000;
    }
    else if(a != b && b != c && a != c){
        int max;
        if(a > b) max = a;
        else max = b;
        if(c > max) max = c;
        
        res = max * 100;
    }
    else{
        int temp;
        if(a == b) temp = a;
        else if(b == c) temp = b;
        else temp = a;
        
        res = 1000 + temp * 100;
    }
    
    cout << res;
}