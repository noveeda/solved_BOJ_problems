#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    map<int, int> myMap;
    int n, m;
    
    // 상근이가 가지고 있는 숫자 카드의 개수 입력
    scanf("%d", &n);
    
    // 상근이가 가지고 있는 숫자 카드가 N개 입력
    for(int i = 0; i < n; i++){
        int value;
        scanf("%d", &value);
        
        auto it = myMap.find(value);
        
        if(it != myMap.end()){
            myMap[value]++;
        }
        else {
            myMap.insert(make_pair(value, 1));
        }
    }
    
    
    // 찾고 싶은 숫자 카드의 개수 M이 입력됨.
    scanf("%d", &m);
    
    // 상근이의 숫자 카드 중에서 찾고 싶은 숫자 카드가 있는지 검색
    for(int i = 0; i < m; i++){
        int value;
        scanf("%d", &value);
        
        auto it = myMap.find(value);
        
        if(it != myMap.end())
            printf("%d ", it->second);
        else 
            printf("0 ");
        
    }
    
    return 0;
}
/*
1. 숫자 카드의 개수 N이 주어진다.
2. 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적힌 수는 -10,000,000 이상 10,000,000 이하이다.
3. 같은 숫자가 적힌 경우는 없다.
4. 찾을 숫자 카드의 개수가 M개 주어진다.
5. 찾을 숫자 카드 M개가 공백을 구분되어져 주어진다.
6. 있으면 1 없으면 0으로 공백으로 구분해 출력한다.
*/