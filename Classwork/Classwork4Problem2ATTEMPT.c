#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// symbolic constants for the rows and columns
#define ROW 5
#define COL 5

// function prototype
void bubbleSort2D(int arr[][COL], int rows);

int main(void) {
  // seed the random number generator
  srand(time(0));
  
  // define the array
  int arr[ROW][COL];

  // assign random elements within the bounds to the array and print
  for(int i = 0; i < ROW; i++){
    for(int j = 0; j < COL; j++){
      arr[i][j] = rand() % 90 + 10;
      printf("%d ", arr[i][j]);
    }
    puts("");
  }

  // new line for readability
  puts("");

  // call the bubble sort function
  // THE BUBBLE SORT ALGORITHM DOES NOT WORK, however, the array is properly initialized and printed in the beginning
  bubbleSort2D(arr, ROW);

  // print the sorted array
  for(int i = 0; i < ROW; i++){
    for(int j = 0; j < COL; j++){
      printf("%d ", arr[i][j]);
    }
    puts("");
  }
  
  return 0;
}

// bubble sort algorithm
void bubbleSort2D(int arr[][COL], int rows) {
  int wall = rows * COL;

  while (wall >= 1){
    for(int i = 0, j = i + 1; j < wall - 1; i++, j++){
      int r1 = i / COL, r2 = i % COL;
      int c1 = j / COL, c2 = j % COL;
      //printf("%d %d, %d %d\n", r1, c1, r2, c2);
      if(arr[r1][c1] > arr[r2][c2]){
        int temp = arr[r1][c1];
        arr[r1][c1] = arr[r2][c2];
        arr[r2][c2] = temp;
      }
    }
    wall --;
  }
}