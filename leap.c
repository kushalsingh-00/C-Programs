/*
-------------------------------------------------------
Name         : Leap Year 
Author       : Kushal Singh Rathore
Discription  : Year Is Leap Or Not With For Loop 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a=1900;
    int b=2200;
    for(int i=a;i<b;i++)
    {
        if(i%4==0)
    {
        if(i%100==0)
        {
            if(i%400==0)
                printf("%d\n",i);
    }
    }
    
}
}