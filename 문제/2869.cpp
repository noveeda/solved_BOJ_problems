#include <iostream>

using namespace std;
int AP(int a, int d, int v) {
	double temp = ((double)(v - a) / d) + 1;
	if (temp - (int)temp == 0) return temp;
	else return (int)temp + 1;
}

int main(){
    // 첫째 줄에 세 정수 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1,000,000,000)
    //높이가 V미터인 나무 막대를 올라갈 것이다. 달팽이는 낮에 A미터 올라갈 수 있다. 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.
    int a, b, v;
    
    cin >> a >> b >> v;
    // d = a - b;
    // a + d(n-1) >= v
    // n > ((v-a) / d) + 1
    
    // 5 1 6
    // 5 + 4(n - 1) >= 6
    
    // 2 1 5
    // 2 + (n - 1) >= 5
    
    
    cout << AP(a, a - b, v);
    
    return 0;
}