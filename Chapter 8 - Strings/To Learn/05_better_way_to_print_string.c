#include <stdio.h>
int main(){
    char firstname[]="Biswajit";//The value of firstname cant be changed here
    //OR
    char *lastname="Mishra";//The value of lastname can be changed here as it is a pointer 
    printf("My name is %s %s",firstname,lastname);
    return 0;
}