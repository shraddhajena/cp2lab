#include<stdio.h>
struct distance
{
	int km,m ,cm;
};
int main()
{
	struct distance d[5];
	int i, max=0, index=0, total;
	for(i=0;i<5;i++)
	{
	printf("enter 3 values");
	scanf("%d %d %d",&d[i].km,&d[i].m,&d[i].cm);
    }
	for(i=0;i<5;i++)
	{
		total=d[i].km*100000 + d[i].m*100 +d[i].cm;
		if(total>max)
		{
			max=total;
			index-i;
		}
	}
printf("logest distance: %d km %d m %d cm", d[index].km,d[index].m,d[index].cm);
return 0;
}
