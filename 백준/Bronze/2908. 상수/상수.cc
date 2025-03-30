#include <iostream>
#include <string>

using namespace std;
string swap(string str, int index1, int index2){
    char temp = str[index1];
    str[index1] = str[index2];
    str[index2] = temp;
    
    return str;
}
int main(){
    // 숫자 두개를 뒤집어서 비교하고 큰거 출력
    string str1, str2;
    cin >> str1 >> str2;
    str1 = swap(str1, 0, 2);
    str2 = swap(str2, 0, 2);
    
    if(stoi(str1) > stoi(str2)) cout << str1;
    else cout << str2;
}