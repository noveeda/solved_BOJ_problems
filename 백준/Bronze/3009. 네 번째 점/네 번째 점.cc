#include <iostream>

using namespace std;

int main(){
    int x[1001] = { 0 };
	int y[1001] = { 0 };
	for (int i = 0; i < 3; i++) {
		int a, b;
		cin >> a >> b;
		x[a]++;
		y[b]++;
	}

	for (int i = 1; i <= 1000; i++) {
		if (x[i] == 1) cout << i << " ";
	}
	for (int i = 1; i <= 1000; i++) {
		if (y[i] == 1) cout << i;
	}
}