// ENE212-0085/2021 BOMA M. LEONARD
#include <stdio.h>

int main () {
    double num1, num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double sum = num1 + num2;
    double difference = num1 - num2;

    printf("The sum and difference is %.2lf and %.2lf respectively.\n", sum, difference);
    printf("The sum is %.2lf\n", sum);
    printf("The difference is %.2lf\n", difference);

    return 0;
}
