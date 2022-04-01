#include <stdio.h>
int main(){
    char name[50];
    printf("Enter your full name : ");
    gets(name);//takes inputs like Biswajit Mishra
    puts(name);//prints the string with \n
    return 0;
}