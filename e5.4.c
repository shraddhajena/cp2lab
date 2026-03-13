#include<stdio.h>
int main()
{
	double a[4]={1.1,2.2,3.3,4.4};
	double *p;
	int i;
	p=a;
	for(i=0;i<4;i++)
	{
		printf("%lf",*(p+1));
	}
	return 0;
}
	
