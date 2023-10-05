#include <stdio.h>

int main(void){

  int x = 5;
  int y = 8;

  // PROVIDED CODE
  // if (y == 8)
  // if (x == 5)
  // puts("@@@@@");
  // else
  // puts("#####");
  // puts("$$$$$");
  // puts("&&&&&");

  // PART 1
  printf("In part 1 the value of x is %d; the value of y is %d\n", x, y);
  puts("The output is:");

  if (y == 8){}
  if (x == 5){
    puts("@@@@@");
  }
  else{
    puts("#####");
  }
  puts("$$$$$");
  puts("&&&&&");

  // PART 2
  printf("\nIn part 2 the value of x is %d; the value of y is %d\n", x, y);
  puts("The output is:");

  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
    else{
      puts("#####");
      puts("$$$$$");
      puts("&&&&&");
    }
  }

  // PART 3
  printf("\nIn part 3 the value of x is %d; the value of y is %d\n", x, y);
  puts("The output is:");

  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
    else{
      puts("#####");
      puts("$$$$$");
    }
    puts("&&&&&");
  }

  // PART 4
  y--;
  printf("\nIn part 4 the value of x is %d; the value of y is %d\n", x, y);
  puts("The output is:");

  if (y == 8){
    if (x == 5){
      puts("@@@@@");
    }
  }
  else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");
  }
  
  return 0;
}