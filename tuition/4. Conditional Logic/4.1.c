#include <stdio.h>


int main()
{
    int number;

    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("Even\n");
    }

    if(number % 2 == 1)
    {
        printf("Odd\n");
    }


    return 0;
}
