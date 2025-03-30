#include <iostream>
#include <string>

using namespace std;

int main() {
    string call;
    int sum = 0, i;
    int arr[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7 ,8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    
    cin >> call;
    
    for (i = 0; i < call.length(); i++) {
        sum += arr[call[i] - 'A'];
    }

    std::cout << sum;
}