#include "mod.h"

double modulo(double num1, double num2) {
    if (num2 != 0) {
        return num1 - (num2 * (int)(num1 / num2));
    } else {
        printf("Error: Modulo by zero is not allowed.\n");
        return 0.0;
    }
}

