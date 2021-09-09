#include <iostream>

using namespace std;

bool compare(int a) {
    int arr[3], i = 0;
    while (a != 0) {
        arr[i++] = a % 10;
        a /= 10;
    }
    return arr[0] - arr[1] == arr[1] - arr[2];
}
int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i < 100) ++count;
        else {
            // over 99
            // 100
            if (i < 1000) {
                if(compare(i)) ++count;
            }
        }
    }
    cout << count;
}