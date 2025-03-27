#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int a, b;

	cin >> a >> b;

	if (a > b) {
		long long t = a;
		a = b;
		b = t;
	}
    if (a == b || b - a == 1) cout << 0;
	else{
        cout << b - a - 1 << "\n";
	    for (long long i = a+1; i < b; i++) {
		    cout << i << " ";
        }
    }
}