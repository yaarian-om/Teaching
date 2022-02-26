#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float result;
    printf("Enter x : ");
    scanf("%d", &x);
    result = (3 * (pow(x, 5) - 5 * (sqrtf(x)) - 6 * (sinf(x))));
    printf("f(x) = %f", result);

    return 0;
}