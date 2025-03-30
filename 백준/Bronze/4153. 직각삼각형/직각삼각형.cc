#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long a,b,c;
    
    while(true){
        
        cin >> a >> b >> c;
        
        if(a == 0 && b == 0 && c == 0) break;
        long n1 = a * a;
        long n2 = b * b;
        long n3 = c * c;

        if(n1+n2 == n3 || n1+n3 == n2 || n2+n3 == n1) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}