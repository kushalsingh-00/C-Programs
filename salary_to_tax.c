//1-3l   0% tax
//3-5    10% tax
//5-7    20% tax
//above 7 30% tax

//salary to tax converter

#include<stdio.h>
int main()
{
    int salary,tax=0,temp;
    printf("Enter the salary\n");
    scanf("%d",&salary);
    if(salary<=300000)
    {
        tax=0;
    }
    else
    {
        temp=salary-300000;
        if(temp<=200000)
        {
            tax=0.1*temp;
        }
        else if(temp>200000&&temp<=400000)
        {
            tax=0.1*200000+(temp-200000)*0.2;
        }
        else if(temp>4000000)
        {
            tax=0.1*200000+0.200000+0.3*(temp-4000000);
        }
    }

    printf("Tax=%d",tax);
    return 0;
}