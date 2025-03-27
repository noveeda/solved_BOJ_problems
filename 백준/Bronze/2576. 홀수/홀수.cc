#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> vec;
	int sum = 0;
	int min = -1;


	for (int i = 0; i < 7; i++) {
		int temp;
		cin >> temp;
		
		if (temp & 1) {
			vec.push_back(temp);
			sum += temp;
		}
	}

	sort(vec.begin(), vec.end());

	if (vec.size() == 0) {
		cout << "-1";
		return 0;
	}
	cout << sum << "\n" << vec.front();
}