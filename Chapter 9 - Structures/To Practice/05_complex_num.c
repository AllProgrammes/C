#include <stdio.h>
typedef struct complex
{
    float real_ib;
    float real_a;
} complex;

int main()
{
    complex number;
    number.real_a = 4;
    number.real_ib = 4.45;
    printf("%.2f + %.2f = %.2f", number.real_a, number.real_ib, number.real_a + number.real_ib);
    return 0;
}