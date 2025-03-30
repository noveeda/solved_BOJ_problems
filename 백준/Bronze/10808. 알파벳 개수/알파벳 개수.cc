#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[26] = { 0 };
	string str;
	ios::sync_with_stdio(0);

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		arr[str[i] - 97] += 1;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}