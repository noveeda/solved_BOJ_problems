#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
	{
		stack<char> st;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); ++j)
		{
			if (st.empty() || s[j] == '(') st.push(s[j]);
			else if (st.top() == '(') st.pop();
		}

		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    
}