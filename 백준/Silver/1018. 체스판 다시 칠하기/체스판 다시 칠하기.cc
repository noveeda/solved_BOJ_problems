#include <iostream>
#include <string>

using namespace std;

int minReColorCount(const string* board){
    int wStart = 0;
    int bStart = 0;
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            // w
            //00 02 04 06 인덱스 합이 짝수
            //11 13 15 17
            
            // b
            //01 03 05 07 다 홀수
            //10 12 14 16
            if((i+j) % 2 == 0 && board[i][j] == 'B'){
                ++wStart;
            }
            else if((i+j) % 2 == 1 && board[i][j] == 'W') {
                ++wStart;
            }
            
        
            if((i+j) % 2 == 0 && board[i][j] == 'W'){
                ++bStart;
            }
            else if((i+j) % 2 == 1 && board[i][j] == 'B') {
                ++bStart;
            }
            
        }
    }
    
    return wStart < bStart ? wStart : bStart;
    
}

void printBoard(const string* board, int lines){
    for(int i = 0; i < lines; i++){
        cout << board[i] << '\n';
    }
    
    cout << minReColorCount(board) ;
    
    cout << "\n=================\n";
}

/*
1. 보드를 받는다.
2. 보드를 8x8 사이즈로 자른다
3. 2가지 패턴중 변경점이 가장 적은걸 찾는다.
4. 반환한다.
*/
int main()
{
    int n; // 세로 길이
    int m; // 가로 길이
    
    cin >> n >> m;
    
    string* board = new string[n];
    
    for(int i = 0; i < n; i++){
        string line;
        cin >> line;
        board[i] = line;
    }
    
    // printBoard(board, n);
    
    // 임시 최소값
    int min = 2500;
    
    
    // 보드 자르기
    for(int y = 0; y <= n - 8; y++){
        for(int x = 0; x <= m - 8; x++){
            string cutboard[8];
            
            
            for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                    cutboard[i] += board[y+i][x+j];
                }   
            }
            
            // printBoard(cutboard, 8);
            
            // 변경 횟수 최솟값 찾기
            int cnt = minReColorCount(cutboard);
            if(min > cnt) min = cnt;
        }
    }
    
    // 최솟값 출력
    cout << min;

    return 0;
}
