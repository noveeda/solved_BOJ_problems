#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, min1, min2;
    cin >> a >> b >> c >> d >> e;
    if(a < b) min1 = a;
    else min1 = b;
    
    if(min1 > c) min1 = c;
    
    
    if(d < e) min2 = d;
    else min2 = e;
    
    cout << min1+min2-50;
}