#include <stdio.h>
int main()
{
    int i = 8;
    int *j = &i; // J stores the address of int i;
    int **k = &j;
    // int *k = &j; this also works but generates a warning
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j); // it will print the value of i because *j is a value at address operator
    printf("The address of i is %d\n", &i);
    printf("The address of i which is value of j is %d\n", j); // it will print the adress of i because it a pointer of i ("J oints to i")
                                                               // confusion time
    printf("The address of j is %d\n", &j);                    // this line is printing the address of j(which stores the address of i)
    printf("The address of j is %d\n", k);
    return 0;
}