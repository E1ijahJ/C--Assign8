#include "math_lib.h"
#include <stdexcept>

double subtract_doubles(double a, double b) {
    return a - b;
}
extern "C" double add(double a, double b) {
    return a + b;
}
double multiply_doubles(double a, double b) {
    return a * b;
}

double divide_doubles(double a, double b) {
    if (b == 0.0) {
        throw std::invalid_argument("Division by zero is undefined.");
    }
    return a / b;
}