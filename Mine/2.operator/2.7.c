#include<stdio.h>

int main()

{
    const double PI=3.1416;

    double radious,area;

    scanf("%lf",&radious);


    area=PI*radious*radious;

    printf("area is:%.2lf\n",area);

    return 0;
}

