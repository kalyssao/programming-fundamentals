#include <iostream>

void input(int *a, int *b) {
    std::cout << "Please enter two integers ";
    std::cin >> *a >> *b;
}

int main (){
    int num1, num2;
    input(&num1, &num2);

    std::cout << "Result is " << num1 + num2 << "\n";
}