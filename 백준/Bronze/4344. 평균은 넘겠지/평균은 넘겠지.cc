#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, studentCnt, scoreTotal;
	ios::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> studentCnt;
		scoreTotal = 0;
		vector<int> vec;
		for (int j = 0; j < studentCnt; j++) {
			int score;
			cin >> score;
			scoreTotal += score;
			vec.push_back(score);
		}

		double avg = (double)scoreTotal / (double)studentCnt;

		int aboveAvgCnt = 0;
		for (int j = 0; j < studentCnt; j++) {
			if (vec[j] > avg) aboveAvgCnt++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (double)aboveAvgCnt * 100/ (double)studentCnt << "%\n";
	}


	return 0;
}