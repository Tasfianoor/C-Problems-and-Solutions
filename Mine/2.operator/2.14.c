#include <stdio.h>

int main()
{
    int num;

    printf("enter an int number: ");

    scanf("%d", &num);

    num = num << 1; /// product or multiply by 2

    ///num = num << 2; /// product or multiply by 4

    ///num = num << 3; /// product or multiply by 8

    ///num = num << 4; /// product or multiply by 16

    printf("After left Shift: %d\n", num);

    return 0;
}
