#include <iostream>
#include <queue>

using namespace std;


int main(){
    
    queue<int> q;
    
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    
    
    for(int i = 1; q.size() != 1; i++){
        if(i%2){
            q.pop();
        }
        else{
            int back = q.front();
            q.pop();
            q.push(back);
        }
    }
    
    printf("%d", q.front());
    
    return 0;
}