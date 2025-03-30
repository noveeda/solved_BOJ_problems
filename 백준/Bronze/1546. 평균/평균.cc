#include <iostream>

using namespace std;

int main(){
    double n, sum = 0, max = 0;
    double avg;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        double temp;
        cin >> temp;
        if(temp > max) max = temp;
        sum += temp;
    }
    avg = sum / (max * 0.01 * n);
    cout << fixed;
    cout.precision(2);
    cout << avg;
}