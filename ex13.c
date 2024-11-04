#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void display_factorial_expression(int n) {
    printf("%d! = ", n);
    for (int i = n; i > 0; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }
}

int main() {
    int number;
    unsigned long long result;


    do {
        printf("Enter a positive integer less than 50: ");
        scanf("%d", &number);

        if (number < 0 || number >= 50) {
            printf("Invalid input. Please enter a positive integer less than 50.\n");
        }
    } while (number < 0 || number >= 50);
    
    display_factorial_expression(number);
    
    result = factorial(number);

    printf(" = %llu\n", result);

    return 0;
}
