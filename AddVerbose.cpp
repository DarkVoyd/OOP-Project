#include "AddVerbose.h"
double AddVerbose::calculate(double num1, double num2) {
    std::cout << "Adding " << num1 << " + " << num2 << std::endl;
    return Add::calculate(num1, num2);
}
