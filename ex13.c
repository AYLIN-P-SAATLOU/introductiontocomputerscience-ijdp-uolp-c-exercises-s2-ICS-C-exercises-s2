#include <stdio.h>

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

int main() {
    int n;
    do {
        printf("Enter a number (< 50): ");
        scanf("%d", &n);
    } while(n >= 50 || n < 0);
    
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
