#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int result = 0;
	int sum = 0;

	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n - 1; j++) { //j는 i+1 이기에 1에서 시작
			for (int k = j+1; k < n; k++) { // k는 j+1이기에 2에서 시작.
				sum = arr[i] + arr[j] + arr[k];
				if (sum > result && sum <= m) result = sum;
			}
		}
	}

	cout << result;

	return 0;
}