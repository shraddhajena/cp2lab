#include<stdio.h>
int main()
{
	char ch='A';
	char *p;
	p=&ch;
	printf("character=%c",ch);
	printf("using pointer=%c",*p);
	return 0;
}

