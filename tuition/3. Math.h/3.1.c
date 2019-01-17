#include <stdio.h>
#include <math.h>


int main()
{
    int num;

    printf("Enter any interger\n");

    scanf("%d", &num);

    num = abs(num);

    printf("Absolute value: %d\n", num);

    return;
}
