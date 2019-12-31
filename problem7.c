/*
-------------------------------------------------------
Name         : Problem 7
Author       : Kushal Singh Rathore
Discription  : Problem Solution 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<20;i++)
    {
        switch (i)
        {
        case 0:i+=5;
        case 1:i+=2;
        case 5:i+=5;        
        default: i+=4;          // whole expression is evaluated because no break statement is here
        }                       // if break is is present here the output is 5 10 15 20
        printf("%d ",i);
    }    
    
}