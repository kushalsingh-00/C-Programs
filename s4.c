/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : Declaration And Intilization Of String
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{   //string is a array of char
    char s[6]="Hello";     //length is 6 because null character(\0) also stored for ending string
    char t[5]="hello";     // equal length initilizer
    char u[4]="hello";     //long hand initilizer
    char v[7]="hello";     //short hand initilizer
    printf("%s\n",s);
    printf("%s\n",t);      //unpredictable behaviour because no place for \0
    printf("%s\n",u);      //array is too long warning
    printf("%s\n",v);      //extra places filled with null char


}