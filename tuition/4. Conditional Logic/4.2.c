/**
    write a program to determine a number is divisible by 5 or not
*/

#include <stdio.h>


int main()
{
    int number;

    scanf("%d", &number);

    if(number % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }


    return 0;
}

