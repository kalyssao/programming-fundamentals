#include <iostream>

int main () {
	int operand1;
	int operand2;
	char oper8or;

	int result;

	std::cout << "Please input two operands: ";
	std::cin >> operand1;
	std::cin >> operand2;

	std::cout << "Please input an operator: ";
	std::cin >> oper8or;

	switch (oper8or)
	{
		case '*':
			std::cout << "Multiplying " << operand1 << " and " << operand2 << " = " << operand1 * operand2 << "\n"; 
			break;

		case '+':
			std::cout << "Adding " << operand1 << " and " << operand2 << " = " << operand1 + operand2 << "\n"; 
			break;

		case '-':
			std::cout << "Subtracting " << operand1 << " and " << operand2 << " = " << operand1 - operand2 << "\n";
			break;

		case '/':
			std::cout << "Dividing " << operand1 << " and " << operand2 << " = " << operand1 / operand2 << "\n";
			break;
	}
}
