#include <stdio.h>

using namespace std;

int main() {
  int numberOfRows, numberOfColumns;
  int rowNumber, columnNumber;
  int matrix[999][999];
  int sum;
 
  printf("Enter the number of lines: \n");
  scanf("%d", &numberOfRows);
  printf("\n");
  
  printf("Enter the number of columns: \n");
  scanf("%d", &numberOfColumns);
  printf("\n");
  
  printf("Enter the elements of the matrix: \n");
 
  for (rowNumber = 0; rowNumber < numberOfRows; ++rowNumber) {
    for (columnNumber = 0; columnNumber < numberOfColumns; ++columnNumber) {
      scanf("%d", &matrix[rowNumber][columnNumber]);
    }
  }

  printf("\n");
  printf("Matrix: \n");
  for (rowNumber = 0; rowNumber < numberOfRows; ++rowNumber) {
    for (columnNumber = 0; columnNumber < numberOfColumns; ++columnNumber) {
      printf("%7d", matrix[rowNumber][columnNumber]);
    }  
      
    printf("\n");
  }
  
  printf("\n");
  printf("The sum of the columns: \n");
  
  for (columnNumber = 0; columnNumber < numberOfColumns; ++columnNumber) {
    sum = 0;
    
    for (rowNumber = 0; rowNumber < numberOfRows; ++rowNumber) {
      sum += matrix[rowNumber][columnNumber];
    }   
    
    printf("%7d", sum);
  }
  
  return 0;

}
