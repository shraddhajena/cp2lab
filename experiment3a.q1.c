#include<stdio.h>
struct student
{
	char name[100];
	int roll;
	float mark;
};
int main()
{
	struct student s;
	printf("enter the names");
	gets(s.name);
	printf("enter roll");
	scanf("%d", &s.roll);
	printf("enter mark");
	scanf("%f", &s.mark);
	printf("student details");
	printf("name:%s \n roll :%d \n mark:%f", s.name,s.roll,s.mark);
	return 0;
}

