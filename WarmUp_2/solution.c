#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Sum: %f\n", num1 + num2);
    printf("Difference: %f\n", num1 - num2);
    printf("Product: %f\n", num1 * num2);
    printf("Quotient: %f\n", num1 / num2);

    return 0;
}