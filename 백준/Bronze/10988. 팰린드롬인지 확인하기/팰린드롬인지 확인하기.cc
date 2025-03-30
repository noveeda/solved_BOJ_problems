#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    
    cin >> str;
    
    for(int i = 0, j = str.length() - 1; i < j; i++, j--){
        if(str[i] != str[j]){
            printf("0");
            return 0;
        }
    }
    
    printf("1");
    return 0;
    
}