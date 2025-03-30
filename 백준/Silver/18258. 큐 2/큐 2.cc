#include <iostream>
#include <queue>

using namespace std;


int main(){
    cin.tie(NULL); 
    
    queue<int> q;
    
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        string cmd;
        cin >> cmd;
        
        if(cmd == "push"){
            int num;
            scanf("%d", &num);
            q.push(num);
        }
        else if(cmd == "pop"){
            if(q.empty() == 0) {
                printf("%d\n", q.front());
                q.pop();
            }
            else printf("-1\n");
            
        }
        else if(cmd == "size"){
            printf("%ld\n", q.size());
        }
        else if(cmd == "empty"){
            printf("%d\n", q.empty());
        }
        else if(cmd == "front"){
            if(q.empty()) printf("-1\n");
            else printf("%d\n", q.front());
        }
        else if(cmd == "back"){
            if(q.empty()) printf("-1\n");
            else printf("%d\n", q.back());
        }
        
    }
    
    return 0;
}
/*
명령은 총 여섯 가지이다.

push X: 정수 X를 큐에 넣는 연산이다.

pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 
     만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
     
size: 큐에 들어있는 정수의 개수를 출력한다.

empty: 큐가 비어있으면 1, 아니면 0을 출력한다.

front: 큐의 가장 앞에 있는 정수를 출력한다. 
       만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
       
back: 큐의 가장 뒤에 있는 정수를 출력한다. 
      만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/