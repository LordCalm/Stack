#include "Stack.h"

int main()
{
	try
	{
		stack s(1);
		s.Push(1);
		s.Push(2);
		s.Push(3);
		s.Dup();
		s.Clear();
		cout << s.Pop() << endl;
		cout << s.Pop() << endl;
		cout << s.Pop() << endl;
		cout << s.Pop() << endl;
	}
	catch (exception exe)
	{
		printf("%s\n", exe.what());
	}
	return 0;
}