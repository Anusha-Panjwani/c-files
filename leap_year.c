//WAP to check whether any Year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year to be checked");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\nEntered year is a Leap Year.....");
        }
        else
        {
            printf("\nEntered year is not a leap year...");
        }
    }
    else if(year%4==0)
    {
        printf("\nEntered year is a leap year...");
    }
    else
    {
        printf("\nEntered year is not a leap year....");
    }
    return 0;
}
