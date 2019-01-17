#include<stdio.h>

int main()

{
    int num;

    scanf("%d",&num);

    if(num>0)
    {
        printf("positive\n");
    }
    else if(num<0)
    {
        printf("negativea\n");
    }
    else
    {
        printf("not negative\n");
    }

    return 0;
}



