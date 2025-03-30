#include <iostream>
#include <string>

using namespace std;

int main(){
    int drawing_paper[100][100] = {0};
    
    int n, x, y, size = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        
        for(int a = x; a < x+10; a++){
            for(int b = y; b < y+10; b++){
                if(a >= 100 || b >= 100) continue;
                drawing_paper[a][b] = 1;
            }
        }
    }
    
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            size += drawing_paper[i][j];
        }
    }
    
    cout << size;
    return 0;
}