#include <iostream>

int main () {
	int integer;
	int *intPtr;
	int &intRef = integer;
	int constInt {212};
	
	integer = 5;

	// put address of integer in intPtr & increment
	intPtr = &integer;
	++*intPtr;

	std::cout << "Increment via pointer: " << integer << "\n";

	// put integer in intRef
	//intRef = integer;
	++intRef;


	std::cout << "Increment via pointer: " << integer << "\n";

	std::cout << "Changing constant value... ";
	constInt = 59;
	std::cout << constInt << "\n"; 
	
	int num {0437};
	int a {'a'};
	std::cout << 0xf3f2 << "\n" << num << "\n" << a << "\n";


}

