#include<stdio.h>
struct student
	{
		int roll;
		char name[20];
};
int main()
{
	struct student
	s[3]={{1,"amiyt"},{2,"rohit"},
	{3,"ravi"}};
	int i;
	for(i=0;i<3;i++)
	{
	printf("%d %S\n", s[i].roll,s[i].name);
    }
	return 0;
}
