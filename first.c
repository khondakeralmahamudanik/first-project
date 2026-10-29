#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    float avg;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    sub=a-b;
    printf("sub=%d\n",sub);
    mul=a*b;
    printf("mul=%d\n",mul);
    avg=(float)sum/2;
    printf("average=%f\n",avg);
    return 0;
}
