/*
-------------------------------------------------------
Name         : Armstrong  
Author       : Kushal Singh Rathore
Discription  : Armstrong:- 153=1^3+5^3+3^3 
-------------------------------------------------------
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,rem,count=0,result=0;
    printf("Enter the which you want to check\n");
    scanf("%d",&num);
    temp=num;
    for(int i=temp;i!=0;i/=10)
    {
        count++;
    }
    temp=num;
    for(int i=temp;i>0;i=i/10)
    {
        rem=i%10;
        result=result+pow(rem,count);
    }
    if(result==temp)
    {
        printf("%d is Armstrong number",num);
    }
    else
    {
        printf("%d is not Armstrong number",num);
    }
    
}