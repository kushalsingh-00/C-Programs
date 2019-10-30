/*
-------------------------------------------------------
Name         : Comparsion
Author       : Kushal Singh Rathore
Discription  : Comparision By Operator Of 3 Number 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter ther values of a,b,c");
    scanf("%d \n %d \n %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("%d is greater",a);
    }
    else if((c>a)&&(b>c))
    {
        printf("%d is grater",b);
    }
    else
    {
        printf("%d is greater",c);
    }
    
}