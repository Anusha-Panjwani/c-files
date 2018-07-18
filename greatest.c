 //Greatest number
 #include<stdio.h>
 int main()
 {
     int first,second,third;
     printf("Enter three different numbers:");
     scanf("%d%d%d",&first,&second,&third);
     if(first>second && first>third)
     {
         printf("First is greatest");
     }
     else if(second>first && second>third)
     {
         printf("Second number is greatest");
     }
     else if(third>first && third>second)
     {
         printf("Third is greatest:");
     }
     else
     {
         printf("You may have entered same value multiple times:");
     }
     return 0;
 }
