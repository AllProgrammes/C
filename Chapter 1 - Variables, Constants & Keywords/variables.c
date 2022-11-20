#include <stdio.h>
int main()
{
  // Q.What is a variable ?
  // Ans something which changes or can be changed

  // Declaration of different types of variables
  int integer;
  char character;
  double double_test;
  float decimal;

  printf("The size of int in my system is  %d \n", sizeof(integer));
  printf("The size of char in my system is  %d \n", sizeof(character));
  printf("The size of double in my system is %d \n", sizeof(double_test));
  printf("The size of float in my system is  %d \n", sizeof(decimal));

  /*

  Explainations :-

  1. sizeof(variable_name) -> When sizeof() is used with the data types such as int, float, char… etc it simply returns the amount of memory is allocated to that data types.

  2. \n is used to move the cursor to a new line

  3. %d is used for integer ,
     %f is used for float ,
     %lf is used for double ,
     %c is used for character.

  */
}