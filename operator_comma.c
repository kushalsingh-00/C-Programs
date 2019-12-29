/*
-------------------------------------------------------
Name         : Comma Operator
Author       : Kushal Singh Rathore
Discription  : Description Of Comma Operator 
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int var,var1,var2;
    var=(3,4,5);           //print righmost operand and evaluate other and reject them   
    var1=(printf("%s\n","Hello"),5);
    var2=3,4,5;  // equal to (var2=3),4,5 beacuse assignment operator have high precedence than comma
    printf("%d %d %d",var,var1,var2);
    return 0;
}