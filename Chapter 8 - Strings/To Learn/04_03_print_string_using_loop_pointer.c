#include <stdio.h>
int main(){
    char name[]="Biswajit";
    char *ptr=name;
    int round=1;
    while (*ptr!='\0'){
        printf("Round %d prints %c\n",round,*ptr);
        round++;
        ptr++;
    }
    return 0;
}