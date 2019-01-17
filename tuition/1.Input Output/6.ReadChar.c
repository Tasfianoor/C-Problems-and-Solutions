#include <stdio.h>

int main()
{
    char awnnesha;

    int number;

    printf("I love to sing\n");

    scanf("%c", &awnnesha);

    getchar(); /// when we need input two characters in a row with different scanf()

    printf("the inputed char is: %c\n", awnnesha);


    printf("enter a char\n");

    scanf("%c", &awnnesha);

    printf("the inputed char is: %c\n", awnnesha);


    printf("enter a number\n");

    scanf("%d", &number);

    printf("the inputed char is: %d\n", number);

    return 0;
}
