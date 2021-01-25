#include <iostream>

int main() {
	int a, b, c, d;
	int sum = 0;
	int mean;
	int count = 0;

	while(count != 5){
		std::cout << "Please enter a number: ";
		std::cin >> a;
		sum = sum + a;
		++count;
	}
	mean = sum / count;
	std::cout << "Mean is: ";
	std::cout << mean;
}
