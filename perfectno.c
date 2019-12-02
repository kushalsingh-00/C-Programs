/*
-------------------------------------------------------
Name         : Perfect Number
Author       : Kushal Singh Rathore
Discription  : Examine The Number Is Perfect Or Not
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter The Number\n");
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            count=count+i;
        }
    }
    if(count==a)
    {
        printf("%d is perfect number",a);
    }
    else
    {
        printf("%d is not perfect number",a);
    }
    
}