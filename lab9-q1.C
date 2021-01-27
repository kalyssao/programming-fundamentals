#include <iostream>
#include <string>
#include <cstring>

int main () {
    std::string initialStr;

    std::cout << "Kindly enter a word: ";
    std::cin >> initialStr;

    char * newStr = new char [initialStr.length()];
    std::strcpy (newStr, initialStr.c_str());

    while(*newStr != '\0'){
        std::cout << *newStr << "\n";
       *newStr++;
    }
}