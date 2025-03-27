#include <bits/stdc++.h>

using namespace std;

int main() {
	int dwarf[9];
	

	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i];
	}
	sort(dwarf, dwarf + 9);

	int i, j, flag = false;
	for(i = 0; i < 8; i++) {
		for (j = i+1; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				if (k == i || k == j) continue;

				sum += dwarf[k];
			}

			if (sum == 100) {
				flag = true;
				break;
			}
		}

		if (flag) break;
	}

	for (int k = 0; k < 9; k++) {
		if (k == i || k == j) continue;

		cout << dwarf[k] << "\n";
	}
	
}