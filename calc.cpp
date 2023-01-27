#include <iostream>
int main() {
    int a, b;
    char action;
    std::cout << "Enter 1-st number -> ";
    std::cin >> a;
    std::cout << "Select an action (+, -, *, /) -> ";
    std::cin >> action;
    std::cout << "Enter 2-nd number -> ";
    std::cin >> b;
    std::cout << "\n";
    switch (action) {
        case '+':
            std::cout << "Result -> " << a + b << std::endl;
            system("pause");
            break;
        case '-':
            std::cout << "Result -> " << a - b << std::endl;
            system("pause");
            break;
        case '*':
            std::cout << "Result -> " << a * b << std:: endl;
            system("pause");
            break;
        case '/':
            std::cout << "Result -> " << a / b << std::endl;
            system("pause");
            break;
        default:
            std::cout << "Error" << std::endl;
            system("pause");
            break;
    }
    return 0;
}