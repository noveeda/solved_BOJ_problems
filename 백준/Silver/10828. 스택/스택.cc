#include <iostream>
#include <string>
class stack {
private:
	int arr[10000];
	int last;
public:
	void init() {
		last = -1;
	}
	void push(int data) {
		arr[++last] = data;
	}
	bool empty() {
		return (last < 0);
	}
	int pop() {
		if (empty()) {
			return -1;
		}
		return arr[last--];
	}
	int size() {
		return last + 1;
	}
	int top() {
		if (empty()) {
			return -1;
		}
		return arr[last];
	}
};

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	stack s;
	s.init();
	for (; n--;) {
		string str;
		int num;
		cin >> str;
		if (str == "push") {
			cin >> num;
			s.push(num);
		}
		if (str == "pop") {
			cout << s.pop() << "\n";
		}
		if (str == "size") {
			cout << s.size() << "\n";
		}
		if (str == "empty") {
			cout << s.empty() << "\n";
		}
		if (str == "top") {
			cout << s.top() << "\n";
		}
	}
}