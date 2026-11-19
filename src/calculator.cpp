#include "calculator.hpp"
#include <stdexcept>

namespace calc {
    double add(double a, double b) { return a + b; }
    double sub(double a, double b) { return a - b; }
    double mul(double a, double b) { return a * b; }
    double div(double a, double b) {
        if (b == 0.0) throw std::invalid_argument("division by zero");
        return a / b;
    }
}
