#include "function.h"

double add(double x, double y) {
    return x + y;
}

double add(double a, double b, double c)  {
    return add(add(a,b), c); // alternatively: return a + b + c;
}

bool test(bool x) {
    return x;
}

bool test (double x) {
    return x > 0;
}