#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, i, j;
    int count[10001] = {0};
    
    cin >> n;
    
    for(i = 0; i < n; i++){
        int a;
        cin >> a;
        ++count[a];
    }
    
    for(i = 1; i <= 10000; i++){
        if(count[i] != 0){
            for(j = 0; j < count[i]; j++) cout << i << "\n";
        }
    }
}