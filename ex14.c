#include <stdio.h>

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter the position of Fibonacci sequence: ");
    scanf("%d", &n);

    if (n < 0) return printf("Please enter a non-negative integer.\n"), 1;
    
    printf("Fibonacci sequence up to position %d:\n", n);
    for (int i = 0; i <= n; i++)
        printf("%d ", fibonacci(i));

    printf("\n");
    return 0;
}
