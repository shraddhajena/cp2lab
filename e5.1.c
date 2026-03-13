#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	p=&a;
	printf("value of a before change=%d",a);
	*p=20;
	printf("value of a after change=%d",a);
	return 0;
}
