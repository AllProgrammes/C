#include <stdio.h>
int main()
{

    // Print natural numbers from 10 to 20 , when initial loop counter is initialized to 0
    int num = 0;
    while (num <= 20)
    {
        if (num >= 10)
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}