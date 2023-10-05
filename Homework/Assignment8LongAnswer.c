#include <stdio.h>
#define SIZE 5

int main(void) {
  int EVEN[SIZE];
  int num = 2;
  for(size_t i = 0; i < SIZE; i++){
    EVEN[i] = num;
    num += 2;
  }
  return 0;
}