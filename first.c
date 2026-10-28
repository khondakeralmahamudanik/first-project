#include<stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    avg=(float)sum/2;
    printf("average=%f\n",avg);
    return 0;
}