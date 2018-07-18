//Arithmatic Operators
#include<stdio.h>
int main()
{
float a,b,sum,minus,mul,div,mod;
printf("Enter two numbers");
scanf("%f%f",&a,&b);
sum=a+b;
minus=a-b;
mul=a*b;
div=a/b;
//mod=a%b;
printf("\nAddition of two numbers is =%f",sum);
printf("\nSubtraction of two numbers is =%f",minus);
printf("\nMultiplication of two numbers is =%f",mul);
printf("\nDivision of two numbers is =%f",div);
//printf("Modulas of two numbers is =%f",mod);
return 0;
}
