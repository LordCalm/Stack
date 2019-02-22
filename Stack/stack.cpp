#include "Stack.h"

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
	else
	{
		throw out_of_range("stack overflow");
	}
}

int Stack::Pop()
{
	if (_top > 0) return *(_stack_ptr + --_top);
	else
	{
		throw out_of_range("stack is empty");
		return 0;
	}
}

int Stack::Top()
{
	if (_top > 0) return *(_stack_ptr + _top - 1);
	else
	{
		throw out_of_range("stack is empty");
		return 0;
	}
}

void Stack::Dup()
{
	if (_top < _size) *(_stack_ptr + _top++) = *(_stack_ptr + _top - 1);
	else
	{
		throw out_of_range("stack overflow");
	}
}

void Stack::Clear()
{
	_top = 0;
}

