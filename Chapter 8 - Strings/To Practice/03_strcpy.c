#include <stdio.h>
#include <string.h>
void strcopy(char name[], char *ptr)
{
    int i = 0;
    while (name[i] != '\0')
    {
        /*At the first loop when i = 0 :-
        pointer ptr was equal to target[0]
        and further with every loop when we did p++ ,
        in reality it was happening target[1],target[2] and so on */
        *ptr = name[i]; // target[0]=name[0]
        ptr++;          // target[0] was made target[1] here
        i++;
    }
    *ptr = '\0';
}
int main()
{
    char name[] = "biswajit"; // made an array -->name
    char target[10];          // made a blank array of 10 characters -->target
    char *ptr = target;       // made a pointer to store the value of target[0];
    strcopy(name, ptr);       // passed the whole -name- array and value of --ptr(address of target)--;
    printf("After using the funtion strcpy the value of the string 'target' is %s\n", target);
    return 0;
}