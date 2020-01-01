/*
-------------------------------------------------------
Name         : Binary To Decimal   
Author       : Kushal Singh Rathore
Discription  : Conversion
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a,result=0,rem,base=1;
    printf("Enter the value\n");
    scanf("%d",&a);
    for(int i=a;i!=0;i=i/10)
    {
        rem=i%10;
        result=result+rem*base;
        base=base*2;
    }
    printf("%d is decimal of %d",result,a);
    return 0;
}