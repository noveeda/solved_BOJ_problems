#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(pair<int, string> x, pair<int, string> y){
    return x.first < y.first;
}

int main(){
    int n; // 1 <= n <= 100,000
    
    cin >> n;
    
    // 전체 데이터를 담을 공간
    vector<pair<int, string>> arr;
    
    // 각 사람별로 담을 공간
    pair<int, string> info;
    
    // 데이터 입력 후 arr에 푸시
    for(int i = 0; i < n; i++){
        cin >> info.first >> info.second;
        arr.push_back(info);
    }
    
    // 오름차순으로 정렬
    stable_sort(arr.begin(), arr.end(), compare);
    
    for(int i = 0; i < n; i++)
        cout << arr[i].first << " " << arr[i].second << '\n'; 
}