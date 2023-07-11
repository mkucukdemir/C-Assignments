#include "Function.h"

void Add(int a, int b, int& result) {
	result = a + b;
}

void Factorial(int a, int& result) {
	result = 1;
	for (int i = 0; i < a; i++)
		result = result * (i + 1);
}

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}