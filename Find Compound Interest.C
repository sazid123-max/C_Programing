#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time, ci;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in %): ");
    scanf("%lf", &rate);
    printf("Enter time in years: ");
    scanf("%lf", &time);
    ci = principal * pow(1 + rate / 100, time) - principal;
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
