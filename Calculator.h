#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "Operation.h"
#include <memory>

class Calculator {
private:
    std::unique_ptr<Operation> operation;

public:
    void setOperation(std::unique_ptr<Operation> op);
    double performOperation(double num1, double num2);
};

#endif