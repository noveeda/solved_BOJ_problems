#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[9] = { 0 };
	string str;
	ios::sync_with_stdio(0);

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] - 48 == 9) arr[str[i] - 48 - 3] += 1;
		else arr[str[i] - 48] += 1;
	}

	int max = 0;
	arr[6] = arr[6] & 1 ? (arr[6] / 2) + 1 : (arr[6] / 2);
	for (int i = 0; i < 9; i++) {
		max = max < arr[i] ? arr[i] : max;
	}

	cout << max;

	return 0;
}