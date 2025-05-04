#include "Calculator.h"

void Calculator::setOperation(std::unique_ptr<Operation> op) {
    operation = std::move(op);
}

double Calculator::performOperation(double num1, double num2) {
    return operation->calculate(num1, num2);
}
