#include <stdio.h>
float force(float result);
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}
int main()
{
    float mass;
    printf("Enter your mass/weight : ");
    scanf("%f", &mass);
    printf("Your force of attraction by earth is %f", force(mass));
    return 0;
}