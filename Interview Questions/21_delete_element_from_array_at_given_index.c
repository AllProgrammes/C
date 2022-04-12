#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size); // taking size of the array
    int integer[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element%d  : ", i + 1);
        scanf("%d", &integer[i]);
    }
    // taking value of element i.e index value
    int nuke;
    printf("Enter the element number you want to delete : ");
    scanf("%d", &nuke);
    // self explainotary

    // if nuke is equal to or less then size then enter the loop else print ERROR and exit
    if (nuke <= size)
    {
        // we are taking from user perpective so when he/she enter's 1 then it is a 0 for us
        // therefore we are doing nuke-1 and size-1
        for (int i = nuke - 1; i < size - 1; i++)
        {
            integer[i] = integer[i + 1];
            // lets's suppose that user entered the nuke value = 2 then
            // we will replace the value of index 2 with value of index 3 and so on till its max size
        }
    }
    else
    {
        printf("Please enter a valid element number ");
        exit(0);
    }

    for (int i = 0; i < size - 1; i++) // we did size-1 because the element at last has no value/uwanted value so....why to print ??
    {
        printf("Value of element%d is %d\n", i + 1, integer[i]);
    }
    return 0;
}