#include <stdio.h>
int main()
{
    int p, r, t;
    printf("Enter principle , rate and time(in years) :");
    scanf("%d%d%d", &p, &r, &t);
    printf("Your simple intrest on your amount Rs%d is %d", p, ((p * r * t) / 100)); // given multiple brackets to prevent miss calculation
    return 0;                                                                        // not understood ? use your brain little bit u will understand what i have done
}