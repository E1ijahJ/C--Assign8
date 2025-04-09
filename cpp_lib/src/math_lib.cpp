#include "math_lib.h"
#include <stdexcept>
extern "C" {
/// @brief this is a funciton that takes two douboles and adds them
/// @param a double number 1
/// @param b and the second double 
/// @return returns the sum for the double
double add(double a, double b) {
    return a + b;
}
/// @brief takes two doubles and returns the difference of the two
/// @param a this the double thats being subtracrted from
/// @param b  the double thats doing the subtracitng
/// @return returns the diffence 
double subtract(double a, double b) {
    return a - b;
}
/// @brief this takes two doubles and then multipleos the two togethter for the product
/// @param a double number 1
/// @param b double number 2 
/// @return reutrns the product of the two
double multiply(double a, double b) {
    return a * b;
}
/// @brief this takes two doubles and returns the qoutient of the two 
/// @param a this is the the number being devided
/// @param b  this is the divisor
/// @return and this reutrns the quottient 
double divide(double a, double b) {
    if (b == 0) throw std::invalid_argument("Division by zero");
    return a / b;
}

}