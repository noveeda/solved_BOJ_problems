#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

vector<string> split(string s, string divid) {
    // 자른 문자열을 넣을 벡터
    vector<string> v;

    //초기 시작 인덱스
    int start = 0;

    // 구분자 찾기
    int d = s.find(divid);

    // 문자열에 구분자가 존재한다면
    while (d != -1) {

        //구분자 전까지 문자열을 잘라 push
        v.push_back(s.substr(start, d - start));

        // 구분자 1칸 뒤 인덱스를 할당
        start = d + 1;

        // 다음 구분자 찾기
        d = s.find(divid, start);
    }
    // 마지막 숫자까지 push
    v.push_back(s.substr(start, d - start));

    //자른 문자열 벡터 리턴
    return v;
}

int sum(vector<string> arr) {
    int sum = 0;

    // 매개변수로 받은 벡터의 원소를 전부 더함
    for (vector<string>::iterator i = arr.begin(); i != arr.end(); i++) 
        // 원소가 문자열이니 정수형으로 변환
        sum += stoi(*i);

    return sum;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        // 문자열 자르기
        vector<string> arr = split(str, ",");
        // 자른 문자열 더해서 합하기
        cout << sum(arr) << endl;
    }

}