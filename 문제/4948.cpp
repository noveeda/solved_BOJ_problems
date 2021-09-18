#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    if(num == 1) return false;
    
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return false;
    }
    
    return true;
    
}
void primeNumberSieve(int start, int end) {
    
	int* a = new int[end + 1];
	int count = 0;
	
	// 1. 배열을 생성하여 초기화한다.
    // start ~ end 까지
	for (int i = 2; i <= end; i++) {
		a[i] = i;
	}

	// 2. 2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지운다.
	// (지울 때 자기자신은 지우지 않고, 이미 지워진 수는 건너뛴다.)
	for (int i = 2; i <= end; i++) {
        // 이미 지워진 수라면 어떤 수의 배수이니까 건너뛰기
		if (a[i] == 0) continue; 

		// 이미 지워진 숫자가 아니라면, 그 배수부터 출발하여, 가능한 모든 숫자 지우기
		for (int j = 2 * i; j <= end; j += i) {
			a[j] = 0;
		}
	}

	// 3. n < x <= 2n이니 n + 1부터 2n까지 소수의 개수를 센다
	for (int i = start + 1; i <= end; i++) {
		if (a[i] != 0) ++count;
	}
	cout << count << "\n";
}

int main(){
    
    
    while (true) {
        int n;    
		cin >> n;
		if (n == 0) break;

		primeNumberSieve(n, n * 2);
	}
    
    return 0;
}