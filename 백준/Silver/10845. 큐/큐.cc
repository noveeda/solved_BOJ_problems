
#include <iostream>

using namespace std;

class Queue{
public:
    int arr[10000];
    int front = 0, back = 0, size = 0;
    
    void push(int x){
        // 데이터 추가. 큐 사이즈를 명령의 최댓값만큼 
        // 선언했기 때문에 가득 찼는지 확인이 필요없다.
        
        arr[back++] = x;
        size++;
    }
    
    void pop(){
        // 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력.
        // 정수가 없는 경우 -1을 출력.
        int data;
        
        if(front == back){
            data = -1;
        }
        else{
            data = arr[front++];
            size--;
        }
        printf("%d\n", data);
    }
    
    void Size(){
        printf("%d\n", size);
    }
    
    void empty(){
        printf("%d\n", front == back);
    }
    
    void Front(){
        printf("%d\n", this->front == this->back ? -1 : arr[this->front]);
    }
    
    void Back(){
        printf("%d\n", this->front == this->back ? -1 : arr[this->back - 1]);
    }
};


int main()
{
    cin.tie(NULL);
    Queue q;
    
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        string str;
        int x;
        cin >> str;
        
        if(str == "push"){
            scanf("%d", &x);
            q.push(x);
        }
        else if(str == "pop"){
            q.pop();
        }
        else if(str == "size"){
            q.Size();
        }
        else if(str == "empty"){
            q.empty();
        }
        else if(str == "front"){
            q.Front();
        }
        else if(str == "back"){
            q.Back();
        }
    }
    return 0;
}