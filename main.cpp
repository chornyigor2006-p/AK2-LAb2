#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calc;
    double a = 5.3, b = 2.4;

    std::cout << "Add: " << a << " + " << b << " = " << calc.Add(a, b) << std::endl;
    std::cout << "Sub: " << a << " - " << b << " = " << calc.Sub(a, b) << std::endl;

    return 0;
}