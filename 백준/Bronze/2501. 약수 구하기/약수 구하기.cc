#include <iostream>

using namespace std;
/*
 * 첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다. 
 * 만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는 0을 출력하시오.
 */

int main(){
    int N, K, count = 0;
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        if(N % i == 0){  // 약수인지 판단
            ++count;     // 약수 개수 카운트
            if(count == K){ // K번째 약수가 존재하면
                cout << i;  // 약수 출력
            }
        }
    }
    if(count < K) {
        cout << 0;   
    }
}