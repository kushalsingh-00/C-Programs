/*
-------------------------------------------------------
Name         : Factorial
Author       : Kushal Singh Rathore
Discription  : Factorial By Function 
-------------------------------------------------------
*/

#include<stdio.h>
int factorial(int number)
{
    if(number==0||number==1)
    return 1;

else
{
    return (number*factorial(number-1));
}
}
int main()
{
    int num;
    printf("please enter the number");
    scanf("%d",&num);
    printf("the factorial of %d is %d",num,factorial(num));
    return 0;
}
