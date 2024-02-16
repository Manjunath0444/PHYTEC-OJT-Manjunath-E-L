#include <stdio.h>
#include "add.h"
#include "mul.h"
#include "mod.h"
#include "div.h"
int main() {
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Modulo\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    int choice;
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = modulo(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            if (result != 0.0) {
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

