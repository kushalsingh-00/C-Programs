/*
-------------------------------------------------------
Name         : Prime Number  
Author       : Kushal Singh Rathore
Discription  : CHecking The Number Is Prime Or Not 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,count=0;
    printf("enter the no\n");
    scanf("%d",&a);
    for (int i = 2; i < a/2; i++)
    {
        if(a%i==0)
        {
            count=1;
            break;
        }

    }
    if(count==0)
    printf("%d is a prime",a);
    else
    printf("%d is not a prime",a);
    
}