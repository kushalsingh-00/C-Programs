#include<stdio.h>
int main()
{
    char a[10];
    int b[10],sum=0;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        b[i]=a[i]-48;
        sum=sum*10+b[i];
    }
    printf("%d",sum);
}