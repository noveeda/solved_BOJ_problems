#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool ascend     = false;
    bool descend    = false;
    bool mixed      = false;
    vector<int> arr;
    
    for (int i = 0; i < 8; i++) {
        int d;
        cin >> d;

        arr.push_back(d);
    }

    for (int i = 0; i < 7; i++) {
        if (arr[i] - arr[i + 1] < 0) ascend = true;
        if (arr[i] - arr[i + 1] > 0) descend = true;
    }
    
    if (ascend && descend) cout << "mixed";
    else if (ascend) cout << "ascending";
    else if (descend) cout << "descending";

    return 0;
}