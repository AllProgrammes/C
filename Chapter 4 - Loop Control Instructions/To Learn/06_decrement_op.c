#include <stdio.h>
int main()
{
    // NOTE :-
    //  --i=i-1;
    int i = 5;
    // This increment is done then and there as soon as it gets the value
    // It increment first and then use the value
    //  shown below
    printf("The current value of i++ is %d\n", --i);
    printf("The current value of i is %d", i);
    // hope you understood what i was trying to explain :)
    return 0;
}