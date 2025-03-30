#include <iostream>

using namespace std;

int main(){
    int h, m, k;
    cin >> h >> m >> k;
    m += (h * 60) + k;
    h = m / 60;
    m %= 60;
    
    if(h >= 24) h -= 24;
    
    cout << h << " " << m;
    
}