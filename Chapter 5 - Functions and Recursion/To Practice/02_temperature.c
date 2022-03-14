#include <stdio.h>
int temperature(int celsius);
int temperature(int celsius)
{
    int fahrenheit;
    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

int main()
{
    int celsius;
    printf("Enter the temperature in celsius : ");
    scanf("%d", &celsius);
    printf("%d Celcius = %d Fahrenheit", celsius, temperature(celsius));
    return 0;
}