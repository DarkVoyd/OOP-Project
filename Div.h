#ifndef DIV_H
#define DIV_H
#include "Operation.h"
#include <stdexcept>

class Div : public Operation {
public:
    double calculate(double num1, double num2) override;
};

#endif#pragma once
