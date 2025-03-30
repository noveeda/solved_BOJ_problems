#include <iostream>

using namespace std;

int main() {
    char ans[5] = {'E','A','B','C','D'};
    for(int tc = 0; tc < 3; tc++){
        int cnt = 0;
        for(int i = 0 ; i < 4; i++){
            int temp;
            cin >> temp;
        
            if(temp == 0) ++cnt;
        }
        cout << ans[cnt] << "\n";
    }
    
    
    
}