#pragma once
#ifndef OPERATION_H
#define OPERATION_H

class Operation {
public:
    virtual double calculate(double num1, double num2) = 0;
    virtual ~Operation() = default;
};

#endif