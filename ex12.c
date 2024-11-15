#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    do {
        printf("Enter a positive integer less than 50: ");
        scanf("%d", &number);
    } while (number < 0 || number >= 50);

    printf("%d! = ", number);
    for (int i = number; i > 0; i--) {
        printf("%d%s", i, (i > 1) ? " * " : "");
        factorial *= i;
    }
    printf(" = %llu\n", factorial);
    return 0;
}
