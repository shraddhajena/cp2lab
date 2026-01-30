#include<stdio.h>
int max(int a,int b,int c);
void main()
{
	int a,b,c,maxno;
	printf("enter three number");
	scanf("%d %d %d", &a,&b,&c);
	maxno=max(a,b,c);
	printf("greatest no between 3 no. is:= %d",maxno);
}

int max(int a,int b,int c)
{
        if(a>b)
	{
		if(a>c)
		{
			return a;
		}
		else 
		{ 
			return c;
		}
	}
	else 
	{
		if(b>c)
		{ 
			return b;
		}
		else
		{ 
			return c;
		}
	}
}
