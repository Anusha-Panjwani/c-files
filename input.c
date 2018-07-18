//Program To develop simple calculator
#include<stdio.h>
int main()
{
float first,second,sum,sub,mul,div;
printf("Enter First Number");
scanf("%f",&first);
printf("Enter Second number");
scanf("%f",&second);
printf("The sum of two numbers is = %.2f",first+second);
printf("\nThe Subtraction of two numbers is = %f",first-second);
printf("\nThe Multiplication  of two numbers is = %f",first*second);
printf("\nThe Division of two numbers is = %f",first/second);
return 0;
}
