#include<stdio.h>

int main() {
printf("Numbers divisible by 3 from 100 to 50 are:\n");

    for (int i = 100; 50 < i; i-- ){
         if (i % 3 == 0)
            {
            printf(" %i" ,i);
        }
    }
    return 0;
}
