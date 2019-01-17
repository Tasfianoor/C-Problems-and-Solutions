#include<stdio.h>

int main()

{
    int x=0,y=1,z=3;

    x=x+y+z;

    y=x+y+z;

    z=x+y+z;

    x=x+y+3;

    y=y+10;

    z=z+y+10;

    x=x+10-7+y;

    printf("%d %d %d",x,y,z);

    return 0;
}
