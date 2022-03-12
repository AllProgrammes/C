#include <stdio.h>
int main()
{
    // NOTE :-
    //  i++=i+1;
    int i = 5;
    printf("The current value of i++ is %d\n", i++); // according to the above note here the value should be 5+1 =6 but let me tell you its no that simple
    // if we do i++ then it will use the current value then increment it in the next step
    // like if we print i++ it will use the value of i currently print it and then increment it i.e i+1
    // shown below
    printf("The current value of i is %d", i);
    // hope you understood what i was trying to explain :)
    return 0;
}