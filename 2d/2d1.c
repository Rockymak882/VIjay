#include <stdio.h>

void main()

 {
   
    int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    int rows = sizeof(array) / sizeof(array[0]);
    
    int colum = sizeof(array[0]) / sizeof(int);
  
    printf("Number of rows: %d\n", rows);
   
    printf("Number of columns: %d\n", colum);
   
    printf("Total number of elements: %d\n", rows * colum);
}