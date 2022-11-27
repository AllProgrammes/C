#include <stdio.h>
#include <string.h> //header file for function used in line 17
int main()
{
  // Defining variables
  char phone_number[10], name[100], mothers_name[100], fathers_name[100], address[1000], pincode[10];

  // TAKING INPUT
  printf("Enter your name : ");
  gets(name);
  printf("Enter your mother's name : ");
  gets(mothers_name);
  printf("Enter your father's name : ");
  gets(fathers_name);
  printf("Enter your phone number : ");
  gets(phone_number);
  while (strlen(phone_number) > 11)
  {
    printf("Please enter correct phone number !!\n");
    gets(phone_number);
  }
  printf("Enter your address : ");
  gets(address);
  printf("Enter the pincode : ");
  gets(pincode);

  // STYLING OF HEADING
  printf("\n\t\t\t\t\t\t");
  for (int i = 0; i < 15; i++)
  {
    printf("x");
  }
  printf("\n");
  for (int row = 0; row < 3; row++)
  {
    printf("\t\t\t\t\t\tx");
    if (row == 1)
    {
      printf("   BIO DATA  ");
    }
    else
      for (int i = 0; i < 13; i++)
      {
        printf(" ");
      }
    printf("x\n");
  }
  printf("\t\t\t\t\t\t");
  for (int i = 0; i < 15; i++)
  {
    printf("x");
  }

  // OUTPUT PART
  printf("\nYour name : %s\n", name);
  printf("Your mother's name : %s\n", mothers_name);
  printf("Your father's name : %s\n", fathers_name);
  printf("Your phone number : %s\n", phone_number);
  printf("Your address and pincode is : %s , %s\n", address, pincode);
  return 0;
}