#include <stdio.h>

int main() {
    int number, count = 0, sum = 0;
    float average;

    printf("Enter numbers (enter -1 to stop):\n");
    
    while (1) {
        scanf("%d", &number);
        
        if (number == -1) break;
        sum += number;
        count++;
    }

    
    if (count > 0) {
        printf("\nTotal entry (excluding -1): %d\n", count);
        printf("Sum: %d\n", sum);
        average = (float)sum / count;
        printf("Average: %.2f\n", average);
    } else {
        printf("No entry detected.\n");
    }

    return 0;
}
