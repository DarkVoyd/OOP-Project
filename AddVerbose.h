#ifndef ADDVERBOSE_H
#define ADDVERBOSE_H
#include "Add.h"
#include <iostream>

class AddVerbose : public Add {
public:
    double calculate(double num1, double num2) override;
};

#endif#pragma once
