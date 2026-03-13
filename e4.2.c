#include<stdio.h>
enum Days
{
Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};
int main()
{
	enum Days d;
	d = Wednesday;
	printf("Day number=%d",d);
	return 0;
}
