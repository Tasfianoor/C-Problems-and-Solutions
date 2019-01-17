#include <stdio.h>

int main()
{
    double x = 7;

    printf("%lf\n", x);

    x = 3;

    printf("%.2lf\n", x);

    x = 3.141;

    printf("%.4lf\n", x);

    return 0;
}
