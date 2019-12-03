/*
-------------------------------------------------------
Name         : Vovel Ckecking
Author       : Kushal Singh Rathore
Discription  : Ckecking Vovel Is In U Or L Case
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    char a;
    printf("Enetr the character");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Entered letter is vovel");
        break;
        default : printf("Entered letter is not vovel");

    }
}