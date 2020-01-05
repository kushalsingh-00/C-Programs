/*
-------------------------------------------------------
Name         : Number Repeater Cheker
Author       : Kushal Singh Rathore
Discription  : Checking Wheather Number Repeated Or Not
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int s[10]={0};
    int N,rem;
    printf("Enter The Number\n");
    scanf("%d",&N);
    for( ;N>0;N=N/10)
    {
        rem=N%10;
        if(s[rem]==1)
            break;
        s[rem]=1;
    }
    if(N>0)
        printf("Yes");
    else
        printf("No");
        
    return 0;
}