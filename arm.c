#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,res=0,rem,d=1,i,c=0;
scanf("%d",&n);
t=n;
while(n!=0)
{
n=n/10;
c++;

}
while(n!=0)
{
rem=n%10;
for(i=1;i<=c;i++)
{
d=d*rem;
}
res=res+d;
n=n/10;
}
if(t==res)
{
printf("yes");
}
else
{
printf("no");
}
}
