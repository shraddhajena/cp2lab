#include<stdio.h>
#include<math.h>
struct point
{
int x,y;
};
int main()
{
	struct point p1,p2;
	double distance;
	printf("enter x1,y1");
	scanf("%d %d",&p1.x,&p1.y);
	printf("enter x2,y2");
	scanf("%d %d",&p2.x,&p2.y);
    distance=sqrt(pow(p2.x-p1.x,2)+(pow(p2.y-p2.y,2)));
    printf("distance=%lf",distance);
    return 0;
}

