/*
-------------------------------------------------------
Name         : Leap Year 
Author       : Kushal Singh Rathore
Discription  : Year Is Leap Or Not Without FOr Loop 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a;
    printf("enter the year");
    scanf("%d",&a);
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
                printf("it is a leap year");
            else
                printf("not a leap year");
            
        }
        else
            printf(" it is a leap year");
        
     }
    else
        printf("not a leap year");
    
}