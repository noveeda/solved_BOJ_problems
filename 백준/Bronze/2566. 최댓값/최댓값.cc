#include <iostream>

using namespace std;

int main(){
    int max = 0, c, r;
    
    // 9x9격자판  숫자들
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            int input;
            
            // 격자의 숫자 입력
            cin >> input;
            
            // 숫자가 최근 저장된 최댓값보다 클 경우 변경
            if(input >= max){
                max = input, c = i, r = j;
            }
        }
    }
    
    cout << max << "\n" << c << " " << r;
    return 0;
}