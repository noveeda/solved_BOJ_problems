#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> PrimeNum(int x) {
    vector<int> prime;

    prime.push_back(2);
    prime.push_back(3);

    for (int i = 2; i < x; i++) {
        bool isPrime = false;
        int end = (int) sqrt(i);
        
        for (int j = 2; j <= end; j++) {
            if (i % j == 0) break;
            else isPrime = true;
        }

        if(isPrime) prime.push_back(i);
    }

    return prime;
}

int main() {
    int x, i = 2;

    cin >> x;
    
   
    //int start = clock();

    vector<int> prime = PrimeNum(x);
    vector<int> arr;
    bool isPrime = true;
    for (int i = 0; i < prime.size();) {
        

        if (x % prime[i] == 0) {
            arr.push_back(prime[i]);
            x /= prime[i];
        }
        if (x % prime[i] != 0) i++;
    }
    
    if (isPrime) {
        for (int i = 0; i < arr.size(); i++) cout << arr[i] << endl;
    }
    
     if (x > 1) {
        cout << x << endl;
    }
    //int end = clock();

    //cout << end - start << "(ms)";
    
    return 0;
}