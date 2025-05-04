#pragma once
#ifndef SUB_H
#define SUB_H
#include "Operation.h"

class Sub : public Operation {
public:
    double calculate(double num1, double num2) override;
};

#endif