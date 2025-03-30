#include <iostream>
#include <string>

using namespace std;

int main() {
    // characters
    // c= s= z= / c- d- / lj nj / dz=
    string str;

    // 문자열 입력
    cin >> str;

    int strlen = str.length();
    int result = str.length();
    for (int i = 0; i < strlen; i++) {
        if (str[i] == 'c' || str[i] == 's' || str[i] == 'z') {
            if (str[i + 1] == '=' || str[i + 1] == '-') result--;
        }
        else if (str[i] == 'l' || str[i] == 'n') {
            if (str[i + 1] == 'j') result--;
        }
        else if (str[i] == 'd') {
            if (str[i + 1] == '-') result--;
            else if (str[i + 1] == 'z' && str[i + 2] == '=') result--;
        }
    }

    cout << result;
}