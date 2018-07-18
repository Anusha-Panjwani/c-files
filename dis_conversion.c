//Program to distance conversion
#include<stdio.h>

int main()
{
    float distance,feet,inch,meter,centimeter,a;
    int b;
    printf("Enter distance in kilometer");
    scanf("%f",&distance);
    meter=distance*1000;
    feet=meter*3;
    inch=feet*12;
    centimeter=meter*100;
    a=pow(2,2);
    b=sqrt(4);
    printf("Distance in Meter is = %f",meter);
    printf("\nDistance in feet is = %f",feet);
    printf("\nDistance in inch is = %f",inch);
    printf("\nDistance in Centimeter is = %f",centimeter);
    printf("\npower is = %f",a);
    printf("\n Square root is = %d",b);
    return 0;
}
