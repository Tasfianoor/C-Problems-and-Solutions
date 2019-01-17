#include <stdio.h>

int main()

{
    float c,F;

    printf("enter a float number\n");

    scanf("%f", &c);  /// no space after format specifier


    F = ((c*9)/5)+32;

    printf("F: %f\n",F);

    return 0;
}
