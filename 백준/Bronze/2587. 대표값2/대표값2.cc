#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> vec;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int temp;
		cin >> temp;
		
		vec.push_back(temp);
		sum += temp;
		
	}

	sort(vec.begin(), vec.end());

	cout << sum / 5 << "\n" << vec[2];
}