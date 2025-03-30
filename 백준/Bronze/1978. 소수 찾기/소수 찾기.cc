#include <iostream>

using namespace std;

int main(){
    // 4
    // 1 3 5 7
    // 3
    
    int n, m, count = 0, dn;
    cin >> n;
    
    for(int i = 0; i != n; i++){
        dn = 0;
        cin >> m;
        
        if(m == 1) continue;
        for(int j = 2; j <= m; j++) if(m % j == 0) dn++;
        
        if(dn == 1) count++;
    }
    
    cout << count;
    return 0;
}