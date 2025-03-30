#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin >> n;
	int Y = 0;
	int M = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		temp += 1;
		Y += temp / 30;
		Y += temp % 30 ? 1 : 0;
		M += temp / 60;
		M += temp % 60 ? 1 : 0;
	}
	Y *= 10;
	M *= 15;

	if (Y < M) {
		cout << "Y " << Y;
	}
	else if(M < Y) {
		cout << "M " << M;
	}
	else {
		cout << "Y M " << Y;
	}
}