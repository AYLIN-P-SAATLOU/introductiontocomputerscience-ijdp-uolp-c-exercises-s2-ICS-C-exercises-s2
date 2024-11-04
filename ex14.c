#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    
    printf("Enter the position of Fibonacci sequence to find (n >= 0): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; 
    }

    
    printf("Fibonacci sequence up to position %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    
    printf("The %d-th Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
