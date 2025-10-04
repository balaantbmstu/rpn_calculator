#include <iostream>
#include "rpn.h"
double evaluate_rpn(const std::string& expression) {
    std::cout << "1" << std::endl;
    for(int i = 0; i < expression.size(); ++i) {
        std::cout << expression[i] << std::endl;
    }
     std::cout << "2" << std::endl;
    for(auto ch : expression) {
        std::cout << ch << std::endl;
    }
    
    
    
    std::cout << "3" << std::endl;

    char operationSymbol;

    std::cout << "Введите знак математической операции (+, -, *, /): ";
    std::cin >> operationSymbol;

    int a = 10, b = 5; // Операционные значения для примера

    switch(operationSymbol) {
        case '+':
            std::cout << "Результат сложения: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Результат вычитания: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Результат умножения: " << a * b << std::endl;
            break;
        case '/':
            if(b != 0) {
                std::cout << "Результат деления: " << static_cast<double>(a) / b << std::endl;
            } else {
                std::cerr << "Ошибка: деление на ноль." << std::endl;
            }
            break;
        default:
            std::cerr << "Неправильный символ операции." << std::endl;
            break;
    } 
    return 0;    
}