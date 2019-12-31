/*
-------------------------------------------------------
Name         : Problem 8
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i=-5;

    while(i<=5)
    {
        if(i>=0)
        {
            break;
        }
        else
        {
            i++;
            continue;
        }
        printf("hello");    
    }
}