#include "Stack.h"

int main()
{
	try
	{
		stack s(10);
		s.Push(1);
		s.Push(2);
		s.Push(3);
		s.Dup();
		s.mul();
		s.add();
		s.sub();
		while(s.Empty()) cout << s.Pop() << endl;
	}
	catch (exception exe)
	{
		printf("%s\n", exe.what());
	}
	return 0;
}