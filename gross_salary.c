//Program to calculate gross salary
#include<stdio.h>
int main()
{
    int sal,da,hra,gross_salary;
    printf("Enter Ramesh's Basic salary :");
    scanf("%d",&sal);
    da=(sal*40)/100;
    hra=(sal*20)/100;
    gross_salary=sal+da+hra;
    printf("Total salary is = %d",gross_salary);
    return 0;
    }
