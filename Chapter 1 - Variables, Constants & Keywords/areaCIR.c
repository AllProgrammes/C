#include <stdio.h>
int main()
{
    int radius;
    float pi = 3.14;
    printf("ENTER THE RADIUS OF THE CIRCLE : ");
    scanf("%d", &radius);
    printf("THE AREA OF CIRCLE IS %0.2f", radius * pi * radius);
    return 0;
}