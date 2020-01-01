/*
-------------------------------------------------------
Name         : Addition Without + Operator   
Author       : Kushal Singh Rathore
Discription  : Method 1 Increment Decrement Operator
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value\n");
    scanf("%d\n%d",&a,&b);
    if(b>0)
    {
        for(int i=b;b!=0;b--)
        {
            a++;
        }
    }
    else if(b<0)
    {
        for(int i=b;b!=0;b++)
        {
            a--;
        }
    }
    printf("The sum is %d",a);
    return 0;
}