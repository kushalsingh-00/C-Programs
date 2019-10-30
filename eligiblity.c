/*
-------------------------------------------------------
Name         : Voting Eligiblity
Author       : Kushal Singh Rathore
Discription  : Chech Wheather Person Is Eligible Or Not
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a;
    printf  ("enter your age");
    scanf("%d",&a);
    if(a>18)
    {
    printf("you are eligible for vote");
    }
    else
    {
        printf("you are not eligible");
    }
    
    return 0;
}
