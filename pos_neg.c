//Conditional
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number to be checked..");
    scanf("%d",&n);
    if(n==0)
    {
        printf("number is Zero");
    }
    if(n<0)
    {
        printf("Number is negative");
    }
    if(n>0)
    {
        printf("Number is positive");
    }
    return 0;
}
