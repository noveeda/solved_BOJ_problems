#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		
		for (int j = 1; j <= (2 * n - 1) - (i * 2); j++) {
			cout << "*";
		}

		cout << " \n";
	}
}