/*
-------------------------------------------------------
Name         : Perfect number  
Author       : Kushal Singh Rathore
Discription  : Perfect number:- 28=1+2+4+7+14 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int num,result=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            result=result+i;
        }
    }
    if(num==result)
    {
        printf("%d is perfect number",num);
    }
    else
    {
        printf("%d is not perfect number",num);
    }
    
}