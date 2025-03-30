#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    map<string, int> myMap; // 키는 std::string 타입, 값은 int 타입
    vector<string> vec;
    
    int n, m, cnt = 0;
    
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        
        myMap.insert(make_pair(str, 1));
    }
    
    for(int i = 0; i < m; i++){
        string str;
        cin >> str;
        
        if(myMap[str]) {
            cnt++;
            vec.push_back(str);
        }
    }
    
    sort(vec.begin(), vec.end(), less<string>());
    
    printf("%d\n", cnt);
    for(int i = 0; i < cnt; i++){
        cout << vec[i] << "\n";
    }

    return 0;
}
