#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n,t,res=0,rem;
scanf("%d %d",&a,&b);
for(n=a+1;n<b;n++)
{
t=n;
while(n!=0)
{
rem=n%10;
res=res+d;
n=n/10;
}
if(t==res)
{
printf("%d",t);
}
}
}
