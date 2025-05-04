#ifndef MUL_H
#define MUL_H
#include "Operation.h"

class Mul : public Operation {
public:
    double calculate(double num1, double num2) override;
};

#endif#pragma once
