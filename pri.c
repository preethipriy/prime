#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,d,c=0;
	scanf("%d %d",&a,&b);
	
	for(i=a+1;i<b;i++)
	{
	
for(d=1;d<=i;d++)
{
		if(i%d==0)
		{
			c++;
	}
	}
		if(c==2)
		{
		printf("%d",i);
		}
		

	}
	return 0;
}
