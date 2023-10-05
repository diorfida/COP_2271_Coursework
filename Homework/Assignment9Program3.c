#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// symbolic constant for the size of the array in main
#define SIZE 10

// function prototypes
void printArray(float array[], int size);
void mySwap(float array[], int size, int index1, int index2);

int main(void) {
  // seed the random generator
  srand(time(0));
  
  // define the array
  float randomArray[SIZE];
  // populate array with random float values
  for(int i = 0; i < SIZE; i++){
    randomArray[i] = (float) rand() / (float) RAND_MAX;
  }

  // print the array as is at the moment
  puts("Before Swap!");
  printArray(randomArray, SIZE);

  // swap the first and last elements of the array and print the result
  mySwap(randomArray, SIZE, 0, 9);
  puts("After Swap!");
  printArray(randomArray, SIZE);
  
  return 0;
}

void printArray(float array[], int size) {
  // iterate through each array element and print it
  for(int i = 0; i < size; i++){
    printf("%f\n", array[i]);
  }
}

void mySwap(float array[], int size, int index1, int index2) {
  // swap using a temp variable
  float temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}