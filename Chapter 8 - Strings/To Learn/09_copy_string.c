#include <stdio.h>
#include <string.h>
int main()
{
    char *firstname = "Biswajit";
    char firstname_copy[30] = "Mishra";
    strcpy(firstname_copy, firstname);
    printf("After doing 'strcpy',the data in 'firstname_copy' is %s", firstname_copy);
    return 0;
}