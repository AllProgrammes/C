#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vector;
void sumVector(vector v1, vector v2)
{
    printf("The sum of both the vectors is %d on x-axis and %d on y-axis", v1.x + v2.x, v1.y + v2.y);
}
int main()
{
    vector v1, v2;
    v1.x = 5;
    v1.y = 7;
    printf("The dimesions of vector1 are %d and %d.\n", v1.x, v1.y);
    v2.x = 8;
    v2.y = 10;
    printf("The dimesions of vector2 are %d and %d.\n", v2.x, v2.y);
    sumVector(v1, v2);
    return 0;
}