//1-3l   0% tax
//3-5    10% tax
//5-7    20% tax
//above 7 30% tax

//tax to salary converter

#include<stdio.h>
int main()
{
    int salary=300000,tax,temp;
    printf("Enter the salary\n");
    scanf("%d",&tax);
    if(tax<=20000)
    {
        salary+=tax*100/10;
    }
    else if(tax>20000&&tax<=40000)
    {
        salary+=20000*100/10+((tax-20000)*100/20);
    }
    else
    {
        salary+=20000*100/10+20000*100/20+((tax-40000)*100/30);
    }
    printf("your salary is %d",salary);
    return 0;
}