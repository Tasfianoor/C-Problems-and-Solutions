#include<stdio.h>

int main()

{
    char burger;

    printf("enter the lowercase character\n");

    scanf("%c",&burger);

    burger=burger+32;

    printf("%c\n",burger);

    return 0;
}

