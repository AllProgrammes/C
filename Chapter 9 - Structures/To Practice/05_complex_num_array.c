#include <stdio.h>
typedef struct complex
{
    float real_ib;
    float real_a;
} complex;
void display(complex *number)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %.2f + %.2f = %.2f\n", i + 1, number[i].real_a, number[i].real_ib, number[i].real_a + number[i].real_ib);
    }
}
int main()
{
    complex number[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of 'a' for number%d : ", i + 1);
        scanf("%f", &number[i].real_a);
        printf("Enter the value of 'ib' for number%d : ", i + 1);
        scanf("%f", &number[i].real_ib);
        printf("\n");
    }
    display(number);
    return 0;
}