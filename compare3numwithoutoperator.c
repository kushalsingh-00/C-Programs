/*
-------------------------------------------------------
Name         : Comparsion
Author       : Kushal Singh Rathore
Discription  : Comparision Without Operator Of 3 Number 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a,b,c \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is greatest",a);
        else
        printf("%d is gratest",c);
    
    }
    else if(b>a)
    {
        if(b>c)
        printf("%d is greatest",b);
        else
        printf("%d is gratest",c);
    }
    
}