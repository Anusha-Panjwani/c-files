//Lower case upper case
#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter any Letter from English Alphabet");
    scanf("%c",&alpha);
    if(alpha>=65 && alpha<=90)
    {
        printf("\n Letter is in Upper Case....");
    }
    else if(alpha>=97 && alpha<=122)
    {
        printf("\n Letter is in Lower Case....");
    }
    else
    {
        printf("\n Wrong Input....");
    }
    return 0;
}
