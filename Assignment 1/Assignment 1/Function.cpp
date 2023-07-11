#include"Function.h"

int Add(int* a, int* b) {
	return (*a) + (*b);
}

void AddVal(int* a, int* b, int* result) {
	*result = (*a) + (*b);
}

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Factorial(int* a, int* result) {
	*result = 1;
	for (int i = 0; i < (*a); i++) {
		*result = (*result) * (i + 1);
	}
}