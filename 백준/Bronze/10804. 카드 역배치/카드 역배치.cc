#include <bits/stdc++.h>

using namespace std;
int main() {
	int cards[20];

	for (int i = 0; i < 20; i++) {
		cards[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		int a, b;

		cin >> a >> b;

		--a;
		--b;
		while (a < b) {
			int temp = cards[a];
			cards[a] = cards[b];
			cards[b] = temp;

			++a;
			--b;
		}
	}

	for (int i = 0; i < 20; i++) {
		cout << cards[i] << " ";
	}
}