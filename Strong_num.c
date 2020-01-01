/*
-------------------------------------------------------
Name         : Strong Number  
Author       : Kushal Singh Rathore
Discription  : Strong Number:- 145=1!+4!+5! 
-------------------------------------------------------
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,fact=1,result=0;
    printf("Enter the which you want to check\n");
    scanf("%d",&num);
    for(int i=num;i>0;i=i/10)
    {
        rem=i%10;
        for(int j=1;j<=rem;j++)
        {
            fact=fact*j;
        }
        result=result+fact;
        fact=1;
        
    }
    if(result==num)
    {
        printf("%d is Strong number",num);
    }
    else
    {
        printf("%d is not Strong number",num);
    }
    
}