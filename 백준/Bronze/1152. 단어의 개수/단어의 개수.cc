#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string str;
    int i, count = 0;

    getline(cin, str);
    if (str[0] == ' ') count--;
    if (str[str.length() - 1] == ' ')count--;
    for (i = 0; i < str.length(); i++) {
        if (isspace(str[i])) ++count;
    }
    cout << ++count << endl;
}