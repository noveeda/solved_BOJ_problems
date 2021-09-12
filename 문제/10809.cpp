#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int strLen;

    cin >> str;
    strLen = str.length();

    for (int i = 97; i <= 122; i++) {
        int index = -1;
        for (int j = 0; j < strLen; j++) {
            if (i != str[j]) continue;
            else {
                index = j;
                break;
            }
        }
        cout << index << " ";

    }
}