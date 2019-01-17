#include <stdio.h>
#include <math.h>


int main()
{
    double num, root_num;

    printf("Enter any number\n");

    scanf("%lf", &num);

    root_num = sqrt(num);

    printf("Result: %.4lf\n", root_num);

    return 0;
}
