#include <iostream>

unsigned int rotate(unsigned int s, unsigned int r) {
	unsigned int res;
	res = s << r;
	return res;	
}

int main () {
	int number;
	int rotation;
	int result;

	std::cout << "Input two values: ";
	
	std::cin >> number;
	std::cin >> rotation;

	result = rotate(number, rotation);
	
	std::cout << "original: " << number << "\n";
	std::cout << "rotated: "<< std::hex << result << "\n";
}
