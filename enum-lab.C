#include <iostream>


int main () {
	int entered;
	enum {RED, YELLOW, AMBER=YELLOW, GREEN};
	
	std::cout << "Enter a number: ";
	std::cin >> entered;

	switch(entered) 
	{
		case RED:
			std::cout << "Red is " << entered;
			break;
		case YELLOW:
			std::cout << "Yellow is " << entered;
			break;
		case GREEN:
			std::cout << "Green is" << entered;
			break;
		default:
			std::cout << "Unrecognised";
			break;
	}

}
