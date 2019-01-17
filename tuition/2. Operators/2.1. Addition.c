#include <stdio.h>


int main()
{
    int a, b, add, sub = 5;

    printf("Input two Integers\n");

    scanf("%d %d", &a, &b);

    add = a + b;

    sub = a - b;

    printf("Addition is: %d\n", add);
    printf("Addition is: %d\n", sub);

    return 0;
}
