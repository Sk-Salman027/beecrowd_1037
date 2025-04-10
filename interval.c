#include <stdio.h>

int main()
{
    // variable declaration
    double number;
    // take input
    scanf("%lf", &number);
    // condition check for interval [0,25]
    if (number >= 0 && number <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    // condition check for interval (25,50]
    else if (number > 25 && number <= 50)
    {
        printf("Intervalo (25,50]\n");
    }
    // condition check for interval (50,75]
    else if (number > 50 && number <= 75)
    {
        printf("Intervalo (50,75]\n");
    }
    // condition check for interval (75,100]
    else if (number > 75 && number <= 100)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
}