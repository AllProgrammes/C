#include <stdio.h>
int main()
{
    int years;
    float rate, compound_interest, principle;
    printf("Enter principle,rate and number of years : ");
    scanf("%f %f %d", &principle, &rate, &years);
    for (int i = 1; i <= years; i++)
    {
        compound_interest = principle * (rate / 100);
        printf("C.I of %d year is %.2f\n", i, compound_interest);
        principle = principle + compound_interest;
    }
    printf("Total Amount after %d years will be %.2f", years, principle);
    return 0;
}