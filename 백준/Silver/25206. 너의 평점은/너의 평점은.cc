#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    double total = 0;
    double hakjumTotal = 0;
    map<string, double> m;
    m["A+"] = 4.5;
    m["A0"] = 4.0;
    m["B+"] = 3.5;
    m["B0"] = 3.0;
    m["C+"] = 2.5;
    m["C0"] = 2.0;
    m["D+"] = 1.5;
    m["D0"] = 1.0;
    m["F"]  = 0.0;
    m["P"]  = 0.0;
    
    // 수강과목은 20개
    for(int t = 0; t < 20; t++){
        // 과목명 학점 등급 순으로 입력
        string line[3];
        for(int i = 0; i < 3; i++){
            cin >> line[i];
        }
        
        // 문자열로 받은 데이터를 실수로 변환
        double hakjum = stod(line[1]);
        double dunggup = m[line[2]];
        
        // 등급이 P인 과목은 반영 X
        if(line[2] != "P") hakjumTotal += hakjum;
        
        // 과목평점을 합산
        total += hakjum * dunggup;
        
    }
    
    // 총과목평점을 학점의 총합으로 나눔
    total /= hakjumTotal;
    cout << total;
}