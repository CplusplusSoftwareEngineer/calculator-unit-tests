#include <iostream>
#include "calculator.hpp"

int main() {
    double a, b; char op;
    std::cout << "Введите: a (знак) b ()\n> ";
    std::cin >> a >> op >> b;
    try {
        double r = (op == '+') ? calc::add(a, b)
                 : (op == '-') ? calc::sub(a, b)
                 : (op == '*') ? calc::mul(a, b)
                 : (op == '/') ? calc::div(a, b)
                 : throw std::invalid_argument("unknown op");
        std::cout << "= " << r << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << "\n";
    }
    
}
