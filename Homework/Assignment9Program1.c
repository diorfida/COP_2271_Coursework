#include <stdio.h>

// function prototype
int myStringLen(const char arr[]);

int main(void) {
  // provide ample space for the string to be stored
  char statement[100000];

  // get the user input
  puts("Enter a string or sentence:");
  gets(statement);

  // pass the character array to the counter function and print the result
  int length = myStringLen(statement);
  printf("The number of characters in your string/phrase is %d\n", length);
  
  return 0;
}

// counts the number of characters in a character array
int myStringLen(const char arr[]){
  int count = 1;
  // increment the counter while the null character is not reached
  while(arr[count] != '\0'){
    count ++;
  }
  return count;
}