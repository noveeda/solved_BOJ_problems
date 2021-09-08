#include <iostream>

using namespace std;

bool isPrimeNumber(int num){
    if (num <= 1) return false;
    int half = num / 2;
    for (int i = 2; i <= half; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int m, n, sum = 0, min = 0;
    cin >> m;
    cin >> n;
    
    for(int i = m; i <= n; i++){
        if(isPrimeNumber(i)){
            if(min == 0) min = i;
            sum += i;
            
        } 
    }
    if(sum == 0) cout << -1;
    else {
        cout << sum << "\n";
        cout << min << "\n";
    }
}