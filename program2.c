#include<stdio.h>
int fact (int n)
{
	int f=1,i;
	if(n<0)
		return 1;
	else 
	{	
		for(i=1;i<=n;i++)
			f=f*i;
		return f;
	}
}
int main()
{
	int x=fact(5);
	if(x<0)
		printf("no is negative number");
	else
		printf("%d",x);
}
