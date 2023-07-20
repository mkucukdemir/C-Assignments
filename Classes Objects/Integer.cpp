#include "Integer.h"

Integer::Integer()
{
	pInt = new int{ 0 };
}

Integer::Integer(int value)
{
	pInt = new int{value};
}

int Integer::GetValue() const
{
	return *pInt;
}

void Integer::SetValue(int value)
{
	*pInt = value;
}
