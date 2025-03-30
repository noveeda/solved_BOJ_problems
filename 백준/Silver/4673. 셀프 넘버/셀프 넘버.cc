#include <iostream>
#define N 10001

using namespace std;
bool num[N];

int d(int n) {                        // 셀프 넘버 생성자
	int temp;
	temp = n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
	return temp;
}

void self_number() {                  // 셀프 넘버 판별 함수
	int temp;                         // 임시 변수 선언.
	num[1] = false;                 
	for (int i = 0; i < 10000; i++) { // 0부터 9999까지
		if (i < 10000) {
			temp = d(i);              // temp 변수에 현재 i에 대한 셀프 넘버 생성
			if (temp < 10000)         // 10000 미만의 셀프 넘버를 배열에 추가
				num[temp] = true;
		}
	}
}

int main() {
	self_number();
	for (int i = 1; i < 10000; i++)
		if (!num[i])
			printf("%d\n", i);
}