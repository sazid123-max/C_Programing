#include <stdio.h>
int main() {
    float a1, b1, a2, b2, sumReal, sumImag;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &a1, &b1);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &a2, &b2);
    sumReal = a1 + a2;
    sumImag = b1 + b2;
    printf("Sum = %.2f + %.2fi\n", sumReal, sumImag);
    return 0;
}
