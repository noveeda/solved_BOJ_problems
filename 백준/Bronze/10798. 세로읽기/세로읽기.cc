#include <iostream>
#include <string>

using namespace std;

int main(){
    int mat[5][15] = {0};
    
    for(int i = 0; i < 5; i++){
        string str;
        cin >> str;
        
        for(int j = 0; j < str.size(); j++){
            mat[i][j] = str[j];
        }
    } 
        
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(mat[j][i] != 0)cout << (char)mat[j][i];
        }
    }
    return 0;
}