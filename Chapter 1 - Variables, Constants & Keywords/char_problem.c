#include <stdio.h>
int main()
{
  // Declaring Variables
  char char1, char2; // taking 2 char variables that are char1 and char2

  printf("Enter char 1 : ");
  scanf("%c", &char1);

  fflush(stdin); // it is used here so that it skips taking your ENTER as an input and gives output without taking 2nd input

  printf("Enter char 2 : ");
  scanf("%c", &char2);

  printf("Char 1 and 2 are %c , %c respectively.\n", char1, char2);

  // Note  : If we dont use fflush then the terminal will dont take second char and will directly print the output and in the place of char2 it will show blank or whitespace.
  return 0;
}