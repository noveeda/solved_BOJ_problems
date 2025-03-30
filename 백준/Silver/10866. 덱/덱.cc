#include <iostream>

using namespace std;

// Deque 클래스
class Deque
{
    
private:
    // 노드 구조체
    typedef struct Node
    {
        int data;
        Node *left_node, *right_node;
    }Node;
    
    Node *head, *tail;
    int size;
public:
    //Deque 생성자
    Deque(){
        
        // head와 tail을 서로 연결
        // head
        head = new Node;
        tail = new Node;
        head->left_node  = NULL;
        head->right_node = tail;
        head->data       = NULL;
        
        // tail
        tail->left_node  = head;
        tail->right_node = NULL;
        tail->data       = NULL;
        
        size = 0;
    }
    
    /* Deque 함수 목록 */
    
    int     GetFront(); // 가장 앞의 정수를 반환, 없으면 -1을 반환.
    int     GetBack();  // 가장 뒤의 정수를 반환, 없으면 -1을 반환.
    void    PushFront(int x); // 앞에서 데이터를 추가.
    void    PushBack(int x);  // 뒤에서 데이터를 추가.
    int     PopFront(); // 가장 앞의 정수를 반환하고 삭제, 없으면 -1을 반환.
    int     PopBack();  // 가장 뒤의 정수를 반환하고 삭제, 없으면 -1을 반환.
    int     GetSize();  // 덱의 현재 크기를 반환.
    bool    IsEmpty();  // 덱이 비어있으면 true, 아니면 false를 반환.
};

int Deque::GetFront(){
    if(IsEmpty() == false){
        // head 뒤의 데이터를 추출
        Node* front = head->right_node;
        int data = front->data;
        
        return data;
    }
    
    return -1;
}

int Deque::GetBack(){
    if(IsEmpty() == false){
        // tail 앞의 데이터를 추출
        Node* back = tail->left_node;
        int data = back->data;
        
        return data;
    }
    
    return -1;
}

void Deque::PushFront(int x){
    // 새로운 노드와 노드를 넣을 위치의 좌우 노드
    Node* newNode = new Node;
    Node* lNode = head;
    Node* rNode = head->right_node;
    
    // 선제적으로 새로운 노드의 L/R 포인터를 양쪽 노드로 연결
    newNode->data       = x;
    newNode->right_node = rNode;
    newNode->left_node  = lNode;
    
    // 이후에 좌우 노드의 L/R 포인터를 새로운 노드로 연결
    lNode->right_node = newNode;
    rNode->left_node  = newNode;
    
    // 사이즈 1 증가
    ++size;
}

void Deque::PushBack(int x){
        // 새로운 노드와 노드를 넣을 위치의 좌우 노드
    Node* newNode = new Node;
    Node* lNode = tail->left_node;
    Node* rNode = tail;
    
    // 선제적으로 새로운 노드의 L/R 포인터를 양쪽 노드로 연결
    newNode->data       = x;
    newNode->right_node = rNode;
    newNode->left_node  = lNode;
    
    // 이후에 좌우 노드의 L/R 포인터를 새로운 노드로 연결
    lNode->right_node = newNode;
    rNode->left_node  = newNode;
    
    // 사이즈 1 증가
    ++size;
}

int Deque::PopFront(){
    // 정수가 있으면
    if(IsEmpty() == false){
        // 정수값 추출
        int data = GetFront();
        
        // 노드 삭제 처리 준비
        Node* gb_node = head->right_node;
        Node* lNode   = head;
        Node* rNode   = gb_node->right_node;
        
        // gb_node 적출 완료
        lNode->right_node = rNode;
        rNode->left_node  = lNode;
        
        // gb_node 메모리 할당 해제 (삭제)
        delete gb_node;
        size--;
        
        return data;
    }
    
    return -1;
}

int Deque::PopBack(){
    // 정수가 있으면
    if(IsEmpty() == false){
        // 정수값 추출
        int data = GetBack();
        
        // 노드 삭제 처리 준비
        Node* gb_node = tail->left_node;
        Node* lNode   = gb_node->left_node;
        Node* rNode   = tail;
        
        // gb_node 적출 완료
        lNode->right_node = rNode;
        rNode->left_node  = lNode;
        
        // gb_node 메모리 할당 해제 (삭제)
        delete gb_node;
        size--;
        
        return data;
    }
    
    return -1;
}

int Deque::GetSize(){
    return size;
}

bool Deque::IsEmpty(){
    return head->right_node == tail;
}



int main(){
    cin.tie(NULL);
    
    Deque d;
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        string str;
        int data;
        
        cin >> str;
        
        // input
        if(str == "push_back"){
            scanf("%d", &data);
            d.PushBack(data);
        }
        else if(str == "push_front"){
            scanf("%d", &data);
            d.PushFront(data);
        }
        
        // output
        else{
            if(str == "front")
                data = d.GetFront();
            
            else if(str == "back")
                data = d.GetBack();
            
            else if(str == "size")
                data = d.GetSize();
            
            else if(str == "empty")
                data = d.IsEmpty();
            
            else if(str == "pop_front")
                data = d.PopFront();
                
            else if(str == "pop_back")
                data = d.PopBack();
        
            printf("%d\n", data);
        }
        
    }
    return 0;
}