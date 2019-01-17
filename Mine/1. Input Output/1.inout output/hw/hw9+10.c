#include<stdio.h>

int main()

{
    int number;

    char burger;

    printf("enter the number\n");

    scanf("%d", &number);

    printf("the inputed number:%c\n",number);

    printf("enter a char\n");

    getchar();
    scanf("%c",&burger);

    printf("the inputed char:%d\n",burger);

    return 0;
}
