#include <iostream>

int input() {
	int arr[2];
	int a, b;
	std::cout << "Enter 2 integers ";
	std::cin >> a;
	std::cin >> b;
	return a, b;
}

int main() {
	int num1, num2;
	num1, num2 = input();

	std::cout << "You entered " << num1 << num2;
}
