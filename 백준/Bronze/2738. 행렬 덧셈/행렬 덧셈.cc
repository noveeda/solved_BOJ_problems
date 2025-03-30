#include <iostream>

using namespace std;

int main(){
    // 변수
    int n, m;
    int** matrixA;
    
    // 매트릭스 사이즈 입력
    cin >> n >> m;
    
    // 매트릭스 사이즈 동적할당
    matrixA = new int*[n];
    for (int i = 0; i < n; i++){
        matrixA[i] = new int[m];
        for(int j = 0; j < m; j++){
            matrixA[i][j] = 0;
        }
    }
    
    // 합산
    for(int i = 0; i < 2; i++){
        for(int a = 0; a < n; a++){
            for(int b = 0; b < m; b++){
                int temp;
                cin >> temp;
                matrixA[a][b] += temp;
            }
    }
    }
    
    for(int a = 0; a < n; a++){
        for(int b = 0; b < m; b++){
            cout << matrixA[a][b] << " ";
        }
        cout << endl;
    }
		
    return 0;
}