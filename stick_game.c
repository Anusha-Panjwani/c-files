//Stick games
#include<stdio.h>
int main()
{
    int stick=21,user,computer;
    printf("Hey Welcome to the world of stick game:");
    printf("\n There are total 21 sticks : \n Your turn pls pic the sticks between 1 and 4");
    scanf("%d",&user);
    if(user<=0 || user>4)
    {
        printf("Invalid choice pls try again:");
    }
    if(user>=1 && user<=4)
    {
        computer=5-user;
        printf("Computer Pics = %d",computer);
        printf("\n Remaining sticks = 16 \n Your turn: ");
        scanf("%d",user);
        if(user<=0 || user>4)
    {
        printf("Invalid choice pls try again:");
    }
    if(user>=1 && user<=4)
    {

        computer=5-user;
        printf("Computer Pics = %d",computer);
        printf("\n Remaining sticks = 11 \n Your turn: ");
        scanf("%d",user);
        if(user<=0 || user>4)
    {
        printf("Invalid choice pls try again:");
    }
    if(user>=1 && user<=4)
    {
      computer=5-user;
        printf("Computer Pics = %d",computer);
        printf("\n Remaining sticks = 6 \n Your turn: ");
        scanf("%d",user);
        if(user<=0 || user>4)
    {
        printf("Invalid choice pls try again:");
    }
     if(user>=1 && user<=4)
    {
      computer=5-user;
        printf("Computer Pics = %d",computer);
        printf("\n Remaining sticks = 1 \n You Loss: ");

    }
    }
    }
    }
return 0;
    }
