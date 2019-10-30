/*
-------------------------------------------------------
Name         : Max Min Medium  
Author       : Kushal Singh Rathore
Discription  : Max, Min, Med With Ternary Operator 
-------------------------------------------------------
*/

#include<stdio.h>
void main()
{
int a,b,c,d,e,max,smax,tmax,fmax,min,sum;
scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
max=((((a>b?a:b)>c?(a>b?a:b):c)>d?((a>b?a:b)>c?(a>b?a:b):c):d)>e?(((a>b?a:b)>c?(a>b?a:b):c)>d?((a>b?a:b)>c?(a>b?a:b):c):d):e);
min=((((a<b?a:b)<c?(a<b?a:b):c)<d?((a<b?a:b)<c?(a<b?a:b):c):d)<e?(((a<b?a:b)<c?(a<b?a:b):c)<d?((a<b?a:b)<c?(a<b?a:b):c):d):e);
printf("%d %d\n",max,min);
sum=a+b+c+d+e;
if((max==a)&&(min==b))
{
    smax=((c>d?c:d)>e?(c>d?c:d):e);
    fmax=((c<d?c:d)<e?(c<d?c:d):e);
}
else if((max==a)&&(min==c))
{
    smax=((b>d?b:d)>e?(b>d?b:d):e);
    fmax=((b<d?b:d)<e?(b<d?b:d):e);
}
else if((max==a)&&(min==d))
{

    smax=((b>c?b:c)>e?(b>c?b:c):e);
    fmax=((b<c?b:c)<e?(b<c?b:c):e);
}
else if((max==a)&&(min==e))
{
    smax=((b>c?b:c)>d?(b>c?b:c):d);
    fmax=((b<c?b:c)<d?(b<c?b:c):d);
}
else if((max==b)&&(min==a))
{
    smax=((c>d?c:d)>e?(c>d?c:d):e);
    fmax=((c<d?c:d)<e?(c<d?c:d):e);
}
else if((max==b)&&(min==c))
{
    smax=((a>d?a:d)>e?(a>d?a:d):e);
    fmax=((a>d?a:d)>e?(a>d?a:d):e);
}
else if((max==b)&&(max==d))
{
    smax=((a>c?a:c)>e?(a>c?a:c):e);
    fmax=((a>c?a:c)>e?(a>c?a:c):e);   
}
else if((max==b)&&(max==e))
{
    smax=((a>c?a:c)>d?(a>c?a:c):d);
    fmax=((a>c?a:c)>d?(a>c?a:c):d); 
}
else if((max==c)&&(min==a))
{
    smax=((b>d?b:d)>e?(b>d?b:d):e);
    fmax=((b<d?b:d)<e?(b<d?b:d):e);
}
else if((max==c)&&(min==b))
{
    smax=((a>d?a:d)>e?(a>d?a:d):e);
    fmax=((a>d?a:d)>e?(a>d?a:d):e);
}
else if((max==c)&&(min==d))
{
    smax=((a>b?a:b)>e?(a>b?a:b):e);
    fmax=((a<b?a:b)<e?(a<b?a:b):e);
}
else if((max==c)&&(min==e))
{
    smax=((a>b?a:b)>d?(a>b?a:b):d);
    fmax=((a<b?a:b)<d?(a<b?a:b):d);
}
else if((max==d)&&(min==a))
{
    smax=((b>c?b:c)>e?(b>c?b:c):e);
    fmax=((b<c?b:c)<e?(b<c?b:c):e);
}
else if((max==d)&&(min==b))
{
    smax=((a>c?a:c)>e?(a>c?a:c):e);
    fmax=((a>c?a:c)>e?(a>c?a:c):e); 
}
else if((max==d)&&(min==c))
{
    smax=((a>b?a:b)>e?(a>b?a:b):e);
    fmax=((a<b?a:b)<e?(a<b?a:b):e);
}
else if((max==d)&&(min==e))
{
    smax=((a>b?a:b)>c?(a>b?a:b):c);
    fmax=((a<b?a:b)<c?(a<b?a:b):c);
}
else if((max==e)&&(min==a))
{
    smax=((b>c?b:c)>d?(b>c?b:c):d);
    fmax=((b<c?b:c)<d?(b<c?b:c):d);
}
else if((max==e)&&(max==b))
{
    smax=((a>c?a:c)>d?(a>c?a:c):d);
    fmax=((a>c?a:c)>d?(a>c?a:c):d); 
}
else if((max==e)&&(min==c))
{
    smax=((a>b?a:b)>d?(a>b?a:b):d);
    fmax=((a<b?a:b)<d?(a<b?a:b):d);
}
else if((max==d)&&(min==e))
{
    smax=((a>b?a:b)>c?(a>b?a:b):c);
    fmax=((a<b?a:b)<c?(a<b?a:b):c);
}
tmax=sum-max-smax-fmax-min;
printf("%d %d %d %d %d\n",max,smax,tmax,fmax,min);
printf("%d %d",max,min);
}