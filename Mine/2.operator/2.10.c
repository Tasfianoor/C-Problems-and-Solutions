
#include<stdio.h>

int main()

{
    int a,b,res;

    printf("enter two integer numbers\n");

    scanf("%d %d", &a,&b);

    res=a&b;

    printf("result:%d\n",res);

    return 0;
}
