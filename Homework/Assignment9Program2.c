#include <stdio.h>

// function prototype
int myStringCmp(const char array1[], const char array2[]);

int main(void) {
  // allow for plenty of space for each string
  char word1[10000] = {0};
  char word2[10000] = {0};

  // get the user input
  puts("Enter 2 words:");
  scanf("%s%s", word1, word2);

  // call the function
  int same = myStringCmp(word1, word2);
  // evaluate based on the result of the function
  if(same < 0){
    printf("%s comes before %s in the dictionary.", word1, word2);
  }
  else if(same > 0){
    printf("%s comes before %s in the dictionary.", word2, word1);
  }
  else{
    printf("%s and %s are the same word.", word1, word2);
  }
  
  
  return 0;
}

int myStringCmp(const char array1[], const char array2[]){
  // loop until a null character is reached
  for(int i = 0; i < 10000; i++){
    // if the characters aren't equal, the appropriate number will be returned
    if(array1[i] < array2[i] || (array1[i] == '\0' && array2[i] != '\0')){
      return -1;
    }
    else if(array1[i] > array2[i] || (array2[i] == '\0' && array1[i] != '\0')){
      return 1;
    }
    else if(array1[i] == '\0' && array2[i] == '\0'){
      break;
    }
  }
  return 0;
}