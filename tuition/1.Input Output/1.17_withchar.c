#include <stdio.h>

int main()
{
    char a, b, c, d;

    printf("input a four character name\n");

    scanf("%c %c %c %c", &a, &b, &c, &d);

    printf("the inputed name is: %c%c%c%c\n", a, b, c, d);

    return 0;
}
