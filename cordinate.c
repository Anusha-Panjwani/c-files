//Co ordinate checking
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter cordinate points x and y");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0)
    {
        printf("Point is Origin");
    }
    if(x>0 && y>0)
    {
        printf("Point is in first quardrant");
    }
    if(x>0 && y<0)
    {
        printf("Point is in Second quadrant");
    }
    if(x<0 && y<0)
    {
        printf("Point is in Third quadrant");
    }
    if(x<0 && y>0)
    {
        printf("Point is in Fourth qudrant");
    }
    return 0;
}
