#include <iostream>
#include <string>

int main() {
    long num1; // variables for the numbers and symbol
    long num2;
    std::string plus;

    std::cout << "Enter your First Number: "; 
    std::cin >> num1; // get input from user, use the input on the variable num1

    std::cout << "Enter your Second Number: ";
    std::cin >> num2; // same thing but with var. num2
    std::cout << "Enter Symbol(+, -, * )";
    std::cin >> plus; // same thing but with var plus

    if (plus == "+") { // check if user uses + - or *
        std::cout << num1 + num2 << "\n";
    }
    if (plus == "-"){
        std::cout << num1 - num2 << "\n";
    }
    if (plus == "*"){
        std::cout << num1 * num2 << "\n";
    }
    return 0; // if the return is 0, the app has no errors, if the return is 1 the app has errors
}
