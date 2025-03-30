#include <iostream>

using namespace std;

int* PrimeNumber(int size) {
	int* arr = new int[size + 1];
	int i;
    
    arr[0] = 0;
    arr[1] = 0;
	for (i = 2; i <= size; i++) {
		arr[i] = i;
	}
	for (i = 2; i <= size; i++) {
		if (arr[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다
			continue;
		// j = i + i , i*2부터 끝까지
		for (int j = i + i; j <= size; j += i) { // i를 제외한 i의 배수들은 0으로 체크
			arr[j] = 0;
		}
	}
	return arr;
}

int main(){
    int start, end;
	cin >> start >> end;

	int* arr = PrimeNumber(end);

	for (int i = start; i <= end; i++) {
		if (arr[i] > 0) cout << arr[i] << '\n';
	}
}