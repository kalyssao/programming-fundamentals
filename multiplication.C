#include <iostream>
int numberPrompt() {
	int number;
	
	std::cout << "Please enter a number: ";
	std::cin >> number;
	return number;
}


int main() {
	int num = numberPrompt();

	if ( num % 2 == 0 ) {
		int mult = 1, prod = 1;
		while ( mult != 21 ) {
			prod = num * mult;
			std::cout << num << " x " << mult << " = " << prod << "\n"; 
			++mult;
		}

	} 
	else {
		int notDiv = 1, divCount = 1;
		while (divCount != 31) {
			if ( notDiv % num != 0) {
				std::cout << notDiv << "\n";
				++notDiv;
				++divCount;
			}
			else
				++notDiv;
		}
	}
}
