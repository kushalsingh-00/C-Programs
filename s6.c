/*
-------------------------------------------------------
Name         : String  
Author       : Kushal Singh Rathore
Discription  : Different Types Of Scanning Func
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    char a[10];
    char b[10];
    printf("Enter the string:"); //9 in scanf store only nine char
    scanf("%9s",a);  // there is no need to put & because as a is treated as pointer to first char and is itself address
    printf("%s",a); // scanf does not store white space and read until a white
    getchar();      // here getchar is used because gets also store string and -
    gets(b);        // and it store the enter after scanf and store it 
    puts(b);
    return 0;
}