#include<stdio.h>

int main()
{
    int num;

    printf("enter an int number: ");

    scanf("%d", &num);

    num = (num << 2) + num; /// it's like 4a + a = 5a

                          /// for 7a this will be: a << 3 - a = 7a
                          /// for 10a this will be: a << 3 + 2a = 10a


    printf("After left Shift: %d\n", num);

    return 0;
}

