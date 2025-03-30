#include <iostream>

using namespace std;

int main() {
	// date % 7
	// 1 2 3 4 5 6 0(월,화,수,목,금,토,일)
	int arr[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	
	int m, d, day = 0;
	cin >> m >> d;

	if (m == 1) day = d % 7;
	else {
		m--;
		day = (arr[m] + d) % 7;
	}
	switch (day) {
	case 0: cout << "SUN"; break;
	case 1: cout << "MON"; break;
	case 2: cout << "TUE"; break;
	case 3: cout << "WED"; break;
	case 4: cout << "THU"; break;
	case 5: cout << "FRI"; break;
	case 6: cout << "SAT"; break;
	}

	return 0;	
}