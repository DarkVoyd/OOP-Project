#include "Div.h"

double Div::calculate(double num1, double num2) {
    if (num2 == 0) {
        throw std::runtime_error("Division by zero");
    }
    return num1 / num2;
}