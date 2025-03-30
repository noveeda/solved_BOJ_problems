#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	
	while (true)
	{	
		// 12321
		// 1
		// 99
		// 1231
		cin >> str;
		if (str == "0") break;
		bool ox = true;
		int l = str.length();

		for (int i = 0; i < l / 2; i++) {
			if (str[i] != str[l - 1 - i]) {
				ox = false;
			}
		}

		if (ox) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}