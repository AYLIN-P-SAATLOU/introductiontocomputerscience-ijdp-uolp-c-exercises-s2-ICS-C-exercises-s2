#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n\nSum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / 10);

    return 0;
}
