#include <stdio.h>

// symbolic constants for the rows and columns
#define ROW 4
#define COL 3

// function prototype
void linearSearch2D(const int array[][COL], int rows, int target);

int main(void) {
  // define the array to be used
  int arr[ROW][COL] = {
    {0, 0, 0},
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  // print the array
  for(int i = 0; i < ROW; i++){
    for(int j = 0; j < COL; j++){
      printf("%d ", arr[i][j]);
    }
    puts("");
  }

  // target value procedure
  int t = 0;
  printf("Enter target: ");
  scanf("%d", &t);
  linearSearch2D(arr, ROW, t);
  
  return 0;
}

// simple linear search, prints all of the indicies of the target occurance
void linearSearch2D(const int array[][COL], int rows, int target) {
  int count = 0;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < COL; j++){
      if(array[i][j] == target){
        printf("Target %d found at row %d and column %d\n", target, i, j);
        count++;
      }
    }
  }
  if(count > 0){
    return;
  }
  printf("Target %d is not in the 2D array\n", target);
}