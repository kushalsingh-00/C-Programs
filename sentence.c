/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : Checking Char and String
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s ",s);
    scanf("%[^\n]%c",sen);
    printf("%c",ch);
    printf("%s",s);
    printf("%s",sen);
    return 0;
}