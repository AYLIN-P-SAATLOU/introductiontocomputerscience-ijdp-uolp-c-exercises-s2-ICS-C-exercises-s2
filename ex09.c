#include <stdio.h>

int main() {
    int number, count = 0;
    int sum = 0;
    float average;

    printf("Enter numbers (enter -1 to stop):\n");
    
    while (1) {
        printf("Number: ");
        scanf("%d", &number);
        
        if (number == -1) {
            break;
        }

        sum += number;
        count++;
    }
    
    printf("\nTotal numbers entered (excluding -1): %d\n", count);
    printf("Sum of numbers: %d\n", sum);

    
    if (count > 0) {
        average = sum / (float)count;
        printf("Average of numbers: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
