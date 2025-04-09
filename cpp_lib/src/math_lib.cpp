#include "math_lib.h"

double subtract_doubles(double a, double b) {
    return a - b;
}
extern "C" double add(double a, double b) {
    return a + b;
}