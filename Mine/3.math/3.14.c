#include<stdio.h>
#include<math.h>

int main()

{
    int x , y;

    double sum;

    printf("enter two integer numbers\n");

    scanf("%d %d",&x , &y);

    sum = pow(x, y);

    printf("result= %d \n", (int)sum);

    return 0;
}

