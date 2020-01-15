/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Tag Of A Structure
-------------------------------------------------------
*/

#include<stdio.h>

struct employee{          //structure tag
    char *name;
    int age;;
    int salary;
};
int manager()
{
    struct employee  manager;
    manager.name="aman";
    manager.age=27;
    manager.salary=65000;
    return manager.salary;
}

int main()
{
    struct employee emp1;
    struct employee emp2;
    printf("Enter Details Of Employee\n");
    printf("Enter the salary of emp1:");
    scanf("%d",&emp1.salary);
    printf("Enter the alary of emp2");    
    scanf("%d",&emp2.salary);
    printf("salary of emp1:%d\nemp2:%d\nmanager:%d",emp1.salary,emp2.salary,manager());
    return 0;
}