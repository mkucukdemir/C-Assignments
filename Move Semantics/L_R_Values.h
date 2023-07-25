#pragma once
namespace l_r_values {
	int exercise();
	// Return r-value
	int Multiply(int x, int y);
	// Return l-value (returns int reference)
	int& PowerByReference(int &x);
	void Print(int& x);
	void Print(const int& x);
	//void Print(int&& x);
}