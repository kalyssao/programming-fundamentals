#include <iostream>

int output (int);
char output(char);
float output(float);
long output(long);
std::string output(const std::string&);

int main () {
    output(5);
    output('a');
    output(3.14f);
    output(922337203685477580);
    output("hello!");
}

std::string output(const std::string &s) {
    std::cout << "String function returns " << s << "\n";
    return s;
}

int output(int a){
    std::cout << "Int function returns " << a << "\n";
    return a;
}

char output(char b){
    std::cout << "Char function returns " << b << "\n";
    return b;
}

float output(float c){
    std::cout << "Float function returns " << c << "\n";
    return c;
}

long output(long d){
    std::cout << "Long function returns " << d << "\n";
    return d;
}

