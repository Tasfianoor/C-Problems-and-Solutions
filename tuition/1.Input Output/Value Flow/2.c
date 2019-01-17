#include<stdio.h>

int main()

{
    int x=3,y=0,z=7;

    x=y+z;

    y=x+z+2;

    z=x+y-10;

    x=y+z-10+7;

    y=z+3;

    printf("%d %d %d",x,y,z);

    return 0;
}
