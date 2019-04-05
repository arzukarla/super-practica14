#include "pch.h"
#include "complexnumber.h"


complexnumber::complexnumber()
{
}





int complexnumber::calculate(int xReal, char oper, int yi)
{

	switch (oper)
	{
	case '+':
		return xReal + yi;
	case '-':
		return xReal - yi;
	case '*':
		return xReal * yi;
	case '/':
		return xReal / yi;
	default:

		return 0;
	}

}