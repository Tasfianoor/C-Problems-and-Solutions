#include <stdio.h>
#include <math.h>


int main()
{
    double base,power, result;

    printf("Enter two numbers\n");

    scanf("%lf %lf", &base, &power);

    result = pow(base,power);

    printf("Result is: %.3lf\n", result);

    return 0;
}
