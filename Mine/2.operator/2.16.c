/**
    Write a program that read a number and mod by four using bitwise AND

    mod by 4

    int res = num & 3;

    mod by n

    int res = num & (n-1);
*/


#include <stdio.h>

int main()
{
    int num;

    printf("enter an int number: ");

    scanf("%d", &num);

    num = num & 3; /// mod by 4


    printf("After Mod: %d\n", num);

    return 0;
}

