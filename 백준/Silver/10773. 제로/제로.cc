#include <iostream>
#include <malloc.h>
#include <random>

using namespace std;

// Stack 클래스 선언
class Stack
{
private:
	// 멤버 변수

	// Integer variables
	int top;				// Top index of the stack 
	int max;				// Stack's size
	int* stack;				// Stack

	// Boolean variables
	bool isStack = false;

public: // 멤버 함수
	
	// 스택 생성자
	Stack(int _max) { init(_max); }

	// 스택 소멸자
	//~Stack(void) { cout << "[객체가 소멸합니다.]\n"; }

	// 스택 초기화
	void init(int _max);

	// 스택 출력
	void show(void);

	// 스택에 값을 푸시. 성공하면 true 아니면 false를 반환
	bool push(int value);

	// 스택의 최상단(마지막) 값을 팝. 성공하면 pop한 값을 리턴 아니면 0를 반환
	int pop(void);

	// 스택의 최상단 값을 리턴
	int last(void);

	// 스택이 비어있으면 true 아니면 false
	bool isEmpty(void) { return (top == 0); };

	// 스택이 꽉 차있으면 true 아니면 false
	bool isFull(void) { return (top == max); }
};

void Stack::init(int _max) {
	top = 0;
	max = _max;
	stack = (int*)malloc(sizeof(int) * this->max);
	isStack = true;
}

void Stack::show(void) {
	if (isEmpty()) {
		cout << "Stack is Empty!";
		return;
	}
	for (int i = 0; i < top; i++) cout << stack[i] << " ";
	cout << endl;
}

bool Stack::push(int value)
{
	if (isFull())
	{
		cout << "stack overflow!";
		return false;
	}
	stack[top++] = value;

	return true;
}

int Stack::pop(void)
{
	if (isEmpty()) return 0;
	return stack[--top];
}

int Stack::last(void) 
{
	if (isEmpty()) return 0;
	return stack[top - 1];
}

int main() {

	int n, result = 0;
	
	cin >> n;

	Stack stack = Stack(n);
	for (int i = 0; i < n; i++) {
		int d;

		cin >> d;

		if (d) stack.push(d);
		else stack.pop();

	}

	while (stack.isEmpty() != true) {
		result += stack.pop();
	}

	cout << result;
	// main함수가 끝나면서 Stack 소멸자가 호출됨.
	// stack.~Stack();
	return 0;
}