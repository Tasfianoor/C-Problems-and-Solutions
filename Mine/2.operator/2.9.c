#include <stdio.h>

int main()

{
    float F,C;

    printf("enter a float number\n");

    scanf("%f", &F);  /// no space after format specifier


    C=((F-32)/9)*5;

    printf("C: %f\n",C);

    return 0;
}
