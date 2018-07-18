//Program to swap the value of two variables.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two values :");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("values after swapping %d\t%d",a,b);
    return 0;

}
