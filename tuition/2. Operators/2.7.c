#include<stdio.h>

int main()
{
    const double PI=3.1416;

    double radius,area;

    printf("�nter the radius of circle\n");

    scanf("%lf",&radius);

    area= PI * radius * radius;

    printf("area is : %.3lf\n",area);

    return 0;
}
