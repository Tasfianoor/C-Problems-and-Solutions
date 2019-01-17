#include<stdio.h>

int main()

{
    int num;

    printf("enter an int num:");

    scanf("%d",&num);

    num=num & 7;/// mod by 8

    printf("after mod:%d\n",num);

    return 0;
}

