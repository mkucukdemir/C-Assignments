#include "L_R_Values.h"
#include <iostream>

namespace l_r_values {
	int exercise() {
		// 1 and 2 are r-values
		int l_value_1 = 1;
		int l_value_2 = 2;

		// r-value returned by the expression
		int r = (l_value_1 * l_value_2);

		// l-value returned by the expression
		++l_value_1 = 3;

		// r-value references
		int &&rr1 = 10;						// temporary
		int &&rr2 = Multiply(1,2);		// function that returns r-value
		int &&rr3 = (l_value_1 * l_value_2);	// expression that returns r-value

		// l-value references
		int &lr1 = l_value_2;
		int &lr2 = PowerByReference(l_value_1);
		// l-value reference binds a temporary if it is constant
		const int& lr3 = 4;

		Print(5);
		Print(Multiply(6, 7));
		Print(l_value_1);
		
		Print(lr3);

		Print(rr1);
		Print(rr2);
		Print(rr3);
		/* If void Print(int&& x) is not commented out
		void Print(int &&x)
		void Print(int &&x)
		void Print(int &x)
		void Print(const int &x)
		void Print(int &x)
		void Print(int &x)
		void Print(int &x)
		*/

		/* If void Print(int&& x) is commented out
		void Print(const int &x)
		void Print(const int &x)
		void Print(int &x)
		void Print(const int &x)
		void Print(int &x)
		void Print(int &x)
		void Print(int &x)
		*/

		return 0;
	}
	// Return r-value
	int Multiply(int x, int y) {
		return x * y;
	}
	// Return l-value
	int& PowerByReference(int& x) {
		x = x * x;
		return x;
	}
	// Accepts a l-value reference
	void Print(int &x) {
		std::cout << "void Print(int &x)" << std::endl;
	}
	// Accepts a cont l-value reference
	void Print(const int &x) {
		std::cout << "void Print(const int &x)" << std::endl;
	}
	// Accepts a r-value reference
	/*void Print(int &&x) {
		std::cout << "void Print(int &&x)" << std::endl;
	}*/
}
