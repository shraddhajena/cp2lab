#include<stdio.h>
struct student
	{
		int roll;
		char name[20];
		float marks;
};
int main()
{
	struct student s[10];
	int i,max=0;
	for(i=0;i<3;i++)
	{
		printf("enter the value for roll , name, marks");
	scanf("%d %s %f", &s[i].roll, &s[i].name, &s[i].marks);
    }
    for(i=0;i<3;i++)
    {
    	if(s[i].marks>s[max].marks)
    	max=i;
    }
    printf("top students");
    printf("%d %s %f", s[max].roll, s[max].name, s[max].marks);
	return 0;
}
