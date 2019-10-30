/*
-------------------------------------------------------
Name         : Max Min Medium  
Author       : Kushal Singh Rathore
Discription  : Max, Min, Med With Operator 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
    int a,b,c,g,m,s;
    printf("enter ther values of a,b,c\n");
    scanf("%d \n %d \n %d",&a,&b,&c);

    if((a>b)&&(a>c))
    {
        g=a;
    }
    else if((c>a)&&(b>c))
    {
        g=b;
    }
    else
    {
        g=c;
        
    }
    
    if(g==a)
    {
        if(b>c)
        {
            m=b;
            s=c;
        }
        else
        {
            m=c;
            s=b;
        }
    }
    else if(g==b)
    {
        if(a>c)
        {
            m=a;
            s=c;
        }
        else
        {
            m=c;
            s=a;
        }
    }
    else if(g==c)
    {
        if(a>b)
        {
            m=a;
            s=b;
        }
        else
        {
            m=b;
            s=a;
        }
        
    }
 printf("%d is greatest\n",g);
 printf("%d is second greatest\n",m);
 printf("%d is smallest\n",s);      
}