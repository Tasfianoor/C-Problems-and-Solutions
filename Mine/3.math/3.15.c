#include<stdio.h>
#include<math.h>

int main()

{
    int num;
    double root_num;

    printf("enter any integer number\n");

    scanf("%d",&num);

    root_num= sqrt(num);

    printf("number: %lf\n",root_num);

    return 0;
}

