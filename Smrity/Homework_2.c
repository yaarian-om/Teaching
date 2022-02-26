#include <stdio.h>

int main()
{
    float yeards;
    float miles;
    float kilometer;
    printf("Enter the Distance in Mies and yards => \n");
    printf("Miles : ");
    // cin >> miles;
    scanf("%f", &miles);
    printf("Yards : ");
    // cin >> yeards;
    scanf("%f", &yeards);
    kilometer = (miles + (yeards / 1760)) * 1.609;
    printf("The distance in kilometer is = %f", kilometer);
    return 0;
}