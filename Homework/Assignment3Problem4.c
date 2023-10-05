#include <stdio.h>

int main(void){
  //define variables to be used
  float starting = 162.54; //starting balance
  char decision = 0; //deposit or withdrawl
  float input = 0; //user input for the deposit or withdrawl
  float newBalance = 0; //new balance after deposit or withdrawl

  //print the current balance
  printf("Current balance: $%.2f\n", starting);

  //ask the user for deposit or withdrawl, and then ask for amount
  printf("Deposit (+) or withdraw (-): ");
  scanf(" %c", &decision);

  printf("Enter amount: ");
  scanf(" $%f", &input);

  //make decision based on user inputs
  if(decision == '+'){
    newBalance = starting + input;
  }
  else if(decision == '-'){
    newBalance = starting - input;
  }
  
  //print the new balance
  printf("New balance is: $%.2f", newBalance);
}