#include <bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	
	int L = 0, R = n*2;
	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= R-1; j++) {
			if (L >= j) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		if (i < n) { ++L; --R; }
		else { --L; ++R; }

		cout << "\n";
	}
}