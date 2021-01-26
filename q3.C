#include <iostream>
#include <string.h>

int main () {
	char input[500];
	int numChars = 0;

	std::cout << "Enter word: ";
	std::cin >> input;

	char *parser;
	parser = strtok( input, "-");
	
	while(parser != NULL) {
		numChars = strlen(parser);
		printf("[%d] %s \n", numChars, parser);
		parser = strtok(NULL, "-");
	}
}

