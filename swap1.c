//Program to swap values of two variables
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    a=a*b;//a=a+b;
    b=a/b;//b=a-b;
    a=a/b;//a=a-b;
    printf("Values after swapping %d\t%d",a,b);
    return 0;
}
