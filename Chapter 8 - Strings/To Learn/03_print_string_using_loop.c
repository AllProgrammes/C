#include <stdio.h>
int main(){
    char name[] = "Biswajit";
    int i = 0;
    while (name[i] != '\0'){
        printf("Address of '%c' is %u\n", name[i], &name[i]);
        i++;
    }
    return 0;
}