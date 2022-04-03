#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vector;

int main()
{
    vector v1, v2;
    v1.x = 5;
    v1.y = 7;
    printf("The dimesions of vector1 are %d and %d.\n", v1.x, v1.y);
    v2.x = 8;
    v2.y = 10;
    printf("The dimesions of vector2 are %d and %d.", v2.x, v2.y);
    return 0;
}