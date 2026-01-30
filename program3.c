#include<stdio.h>
int power(int x,int y)
{
	int p=1,i;
	for(i=1;i<=y;i++)
		p=p*x;
             return p;
}
int power(int x,int y);
{
	printf(enter base and exponent");
	scanf("%d %d",&x,&y);
	printf("%d to the power %d is %d", x,y,power(x,y));
	return 0;
}

