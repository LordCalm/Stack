#include <iostream>
using namespace std;

typedef class Stack {
private:
	int *_stack_ptr;
	const int _size;
	int _top;
public:
	Stack(int csize);
	~Stack();
	void Push(int data);
	int Pop();
}stack;

Stack::Stack(int size):
	_size(size)
{
	_stack_ptr = new int [_size];
	_top = 0;
}

Stack::~Stack()
{
	delete[] _stack_ptr;
}

void Stack::Push(int data)
{
	if (_top < _size) *(_stack_ptr + _top++) = data;
}

int Stack::Pop()
{
	if (_top > 0) return *(_stack_ptr + --_top);
}

int main()
{
	stack s(10);
	s.Push(1);
	s.Push(2);
	s.Push(3);
	cout << s.Pop();
	return 0;
}
