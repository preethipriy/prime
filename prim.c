#include <stdio.h>
#include<conio.h>
int main()
{
	int a,c=0,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
		if(c==2)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	
	return 0;
}
