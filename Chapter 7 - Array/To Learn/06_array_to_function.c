#include <stdio.h>
void arrayFunction(int *p, int n);
void arrayFunction(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i + 1, *p);
        p++;
    }
}
int main()
{
    int element[] = {5, 4, 3, 2, 1};
    arrayFunction(element, 5);
    return 0;
}