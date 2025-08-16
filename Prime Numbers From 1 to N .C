#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        int prime = 1; 
        for (j = 2; j < i; j++) { 
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
