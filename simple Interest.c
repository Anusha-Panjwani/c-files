   //Simple Interest
#include<stdio.h>
int main()
{
    float p,n,r,si;
    printf("Enter the values of P N And R");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("The simple interest of above given data is =%f",si);
        return 0;
}
