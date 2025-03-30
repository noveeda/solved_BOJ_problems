#include <iostream>

using namespace std;

int main() {
	int a, b, c, mid = 0;
	cin >> a >> b >> c;
	if (a >= b && a >= c) {
		if (b <= c) mid = c;
		else mid = b;
	}
	else if (b >= a && b >= c) {
		if (a <= c) mid = c;
		else mid = a;
	}
	else if (c >= a && c >= b) {
		if (a <= b) mid = b;
		else mid = a;
	}

	cout << mid;


	return 0;	
}