#include <stdio.h>
int main()
{
    int p, t, r, a = 100;
    printf("Enter the principle , rate and time (in year)\n");
    scanf("%d%d%d", &p, &r, &t);
    printf("Your simple intrest is %d", ((p * r * t) / a));
    return 0;
}