#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg);
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int a = 5, b = 6;
    int sum;
    float avg;
    sumAndAvg(a, b, &sum, &avg);
    printf("Sum = %d and Avg = %.2f", sum, avg);
    return 0;
}