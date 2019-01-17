#include<stdio.h>

int main()

{
    int num;

    printf("enter an int number\n");

    scanf("%d", &num);

    num=num >> 1 ;///divided by 2;

    /// num=num >> 2; ///divided by 4;

    printf("after right shift:%d\n",num);

    return 0;
}
