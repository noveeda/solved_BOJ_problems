#include <iostream>
#include <algorithm>

using namespace std;

// Name: BS
// Params
// - arr: 탐색할 배열
// - target: 찾을 값
// - low: 최소 검색 인덱스 위치
// - high: 최대 검색 인덱스 위치
// Desc:
//   배열을 이분 탐색함.

int BS(int arr[], int target, int size) {

	int start = 0;
	int end = size;
	int mid = (end + start) / 2;
	

	// 이분해서 리스트 원소가 1개 남을때까지
	while (end - start >= 0) {
		// Find target in arr
		// 0 1 2 3 4 5
		if (arr[mid] == target) return 1;

		else if (arr[mid] < target) {
			start = mid + 1;
		}
		else if (arr[mid] > target) {
			end = mid - 1;
		}

		mid = (end + start) / 2;
	}

	return 0;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cin >> m;

	int* marr = new int[m];
	//showArr(arr, arr + n);
	for (int i = 0; i < m; i++) {
		cin >> marr[i];
	}

	for (int i = 0; i < m; i++) {
		cout << BS(arr, marr[i], n - 1) << "\n";
	}
}