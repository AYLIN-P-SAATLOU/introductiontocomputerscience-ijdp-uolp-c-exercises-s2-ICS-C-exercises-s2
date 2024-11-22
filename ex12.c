#include <stdio.h>

int main() {
    int n, fact = 1;
    
    do {
        printf("Enter a number (< 50): ");
        scanf("%d", &n);
    } while(n >= 50 || n < 0);
    
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    
    printf("%d! = %d\n", n, fact);
    return 0;
}
