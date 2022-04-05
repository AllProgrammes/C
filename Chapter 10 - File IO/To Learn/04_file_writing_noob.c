#include <stdio.h>
int main()
{
    FILE *noob;
    noob = fopen("noob.txt", "w");
    fprintf(noob, "I am noob\nBut I am working my ass of to improve");
    printf("This program ran successfully! Now give party XD");
    fclose(noob);
    return 0;
}