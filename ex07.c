#include <stdio.h>

int main(){
  int matrix[10][3];

  for (int i = 0; i < 10; i++){
    matrix[i][0] = (i + 1) * 5; // first col
    matrix[i][1] = 100 - ((i) * 10 + 1);  // sec col
    matrix[i][2] = i + 1;  // third col
  }

  printf("Expected output format:\n ");
  
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
  
  return 0;
}
