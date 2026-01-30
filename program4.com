#include<studio.h>
array(int arr[],int size[])
{
	for(int i=0;i<size;i++)
	{
	count<<arr[i]<<;
	}
}
int main()
{
	int a[]={1,2,3,4};
	{
	printf("%d",a);
	}

