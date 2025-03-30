#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a, string b){
    return a < b;
}
bool compare1(string a, string b){
    return a.length() < b.length();
}
int main()
{
	int n;
	cin >> n;

	string* arr = new string[n];
	for (int i = 0; i < n; i++) {
		bool b = false;
		string str;
		cin >> str;

		for (int j = 0; j <= i; j++) {
			if (str == arr[j]) {
				b = true;
				break;
			}
		}

		if(!b) arr[i] = str;
	}

	stable_sort(arr, arr + n, compare);

	stable_sort(arr, arr + n, compare1);

	for (int i = 0; i < n; i++) {
		if (arr[i] != "") {
			if (i == n - 1) cout << arr[i];
			else cout << arr[i] << "\n";
		}
	}
	
	return 0;

}