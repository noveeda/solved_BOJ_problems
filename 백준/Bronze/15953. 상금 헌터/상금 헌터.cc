#include <iostream>

using namespace std;
// a : 1 3 6 10 15 21
// a : 50 30 20 5 3 1
// b : 1 3 7 15 31
// b : 512 256 128 64 32
int main() {
    int testCase, i, a, b, total;
    cin >> testCase;
    for (i = 0; i < testCase; i++) {
        cin >> a >> b;

        total = 0;
        if (a == 0)         total += 0;
        else if (a <= 1)    total += 500;
        else if (a <= 3)    total += 300;
        else if (a <= 6)    total += 200;
        else if (a <= 10)   total += 50;
        else if (a <= 15)   total += 30;
        else if (a <= 21)   total += 10;
        else total += 0;

        if (b == 0)         total += 0;
        else if (b <= 1)    total += 512;
        else if (b <= 3)    total += 256;
        else if (b <= 7)    total += 128;
        else if (b <= 15)   total += 64;
        else if (b <= 31)   total += 32;
        else                total += 0;

        cout << total * 10000 << endl;
    }
}