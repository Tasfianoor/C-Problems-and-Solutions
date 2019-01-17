#include<stdio.h>

int main()

{
    int a,b;

    scanf("%d %d",&a, &b);

    if(a>b)
    {
        printf("max a\n");
    }
    else /// this else encompasses two conditions: less than or equal
    {
        printf("b is max or equal to a\n");
    }
    return 0;
}
