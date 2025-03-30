#include <iostream>
#include <cmath>

using namespace std;
// 최대공약수
int GCD(int a, int b) {
	while (b != 0) {
		int n = a % b;
		a = b;
		b = n;
	}
	return a;
}

// 최소공배수
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}

int main(){
    int a,b;
    cin >> a >> b;
    if(b > a) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    cout << GCD(a,b) << "\n" << LCM(a,b);
}