#include <stdio.h>
int main()
{
    int a = 5;
    int *pointer;
    int **pointer2;
    pointer = &a;
    pointer2 = &pointer;
    // printf("This value of a is %d and the address of a is %d\n", pointer, &a);
    printf("%d\n", a);         // value of a
    printf("%d\n", &a);        // address of a
    printf("%d\n", pointer);   // pointer = &a
    printf("%d\n", *pointer);  // will open what value does the value of pointer aka address of a contains
    printf("%d\n", pointer2);  // pointer2 = &pointer
    printf("%d\n", *pointer2); // will open what value does the value of pointer2 aka address of pointer contains
    printf("%d\n", **pointer2);
    // if we do *pointer then it will open whats in the address of a
    // And if we do **pointer then it will give the value of whats inside the addresss of a
    // like *pointer2 will open whats in the addres of pointer and **pointer2 will take this step further and print the value of the address stored in pointer
    return 0;
}