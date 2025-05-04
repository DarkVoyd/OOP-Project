#pragma once
#ifndef ADD_H
#define ADD_H
#include "Operation.h"

class Add : public Operation {
public:
    double calculate(double num1, double num2) override;
};

#endif