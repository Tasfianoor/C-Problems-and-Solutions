#include<stdio.h>

int main()

{
    int a,b,sum;

    printf("enter two integer numbers\n");

    scanf("%d %d", &a,&b);

    sum=a%b;

    printf("remainder is:%d\n",sum);

    return 0;
}
