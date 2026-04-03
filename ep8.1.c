#include<stdio.h>
struct Complex
{
	float real ,imag;
};
void incrComplex(struct Complex *c)
{
	c->real +=1.0;
    c->imag +=1.0;
}
int main()
{
	struct Complex num;
	printf("enter real and imag values");
	scanf("%f %f", &num.real,&num.imag);
	incrComplex(&num);
	printf("after increment");
	printf("real=%.1f",num.real);
	printf("imaginary=%.1f",num.imag);
	return 0;
}

