#include<stdio.h>
struct Data
{
	unsigned int num : 4;
};
int main()
{
	struct Data d;
	d.num = 10;
printf("store value:%u", d.num);
	return 0;
}
