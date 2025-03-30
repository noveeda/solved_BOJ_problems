#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    string str;
    int arr[26] = { 0 }, frequency = 0, index;
    bool overlap = false;

    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    for (int i = 0; i < str.length(); i++) {
        ++arr[str[i] - 'A']; // ++arr[str[i] - 65]

    }

    //for (int i = 0; i < 26; i++) cout << arr[i] << " ";

    for (int i = 0; i < 26; i++) { // A~Z까지 빈도수 측정

        if (arr[i] > frequency) {   // 현재 알파벳이 이전 알파벳보다 빈도수가 높다면
            index = i;              // 현재 알파벳의 인덱스로 설정
            frequency = arr[i];     // 현재 알파벳의 빈도수로 설정
            overlap = false;        // 중복 여부 확인
        }
        else if (frequency == arr[i] && index != i) {    // 빈도수가 같으면서 다른 알파벳이면
            overlap = true;           // 중복 true
        }
    }

    int result = index + 'A';
    if (!overlap) {
        cout << (char)(result);
    }
    else {
        cout << '?';
    }

}