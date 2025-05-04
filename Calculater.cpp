#include <iostream>
#include <map>
#include <memory>
#include <vector>
#include <algorithm>
#include "Operation.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "AddVerbose.h"
#include "Calculator.h"

int main() {
    Calculator calculator;
    double num1, num2;
    int operationIndex;

    std::cout << "Enter two numbers(with a space or new line in between):" << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "Select operation(Type the number of the operation):" << std::endl;
    std::cout << "0. Addition\n1. Subtraction\n2. Multiplication\n3. Division\n4. Verbose Addition" << std::endl;
    std::cin >> operationIndex;

    std::map<int, std::unique_ptr<Operation>> operations;
    operations[0] = std::make_unique<Add>();
    operations[1] = std::make_unique<Sub>();
    operations[2] = std::make_unique<Mul>();
    operations[3] = std::make_unique<Div>();
    operations[4] = std::make_unique<AddVerbose>();

    try {
        if (operations.find(operationIndex) == operations.end()) {
            throw std::invalid_argument("Invalid operation index!");
        }
        calculator.setOperation(std::move(operations[operationIndex]));
        double result = calculator.performOperation(num1, num2);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
