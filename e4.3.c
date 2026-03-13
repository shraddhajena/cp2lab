#include<stdio.h>
union Test
{
	struct
	{
		unsigned int num : 4;
	}bit;	
};
int main()
{
	union Test d;
	d.bit.num = 7;
	printf("value:%d", d.bit.num);
	return 0;
}
