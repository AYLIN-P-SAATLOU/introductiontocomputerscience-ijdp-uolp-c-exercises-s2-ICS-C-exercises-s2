#include <stdio.h>

int main(){
  int matrix[3][3];

  printf("Expected output format:\n ");
  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
  
  for (int i = 0; i < 3; i++){
    matrix[i][0] = (i + 1) * 5;
    matrix[i][1] = 100 - ((i) * 10 + 1);    
    matrix[i][2] = i + 1; 
  }
  
  return 0;
}
