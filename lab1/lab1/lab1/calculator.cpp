#include "pch.h"
#include "calculator.h"






calculator::calculator()
{
}

int calculator::Calculate(int x, char oper, int y)
{
	
		switch (oper)
		{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		default:
			return 0;
		}
	
	return 0;
}


