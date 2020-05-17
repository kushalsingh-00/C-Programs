#include<stdio.h>
int main()
{
    char a[100],b[100];
    printf("Enter the first string");
    gets(a);

    printf("Enter the Second string");
    gets(b);

    if(strcmp(a,b)==0)
    printf("Entered strings are equal\n");
    else
    printf("Entered string are not equal\n");

    return 0;
}