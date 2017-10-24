//Bubble sort
#include<stdio.h>
main()
{
	int a[]={2,7,4,9,1,3};
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6-i;j++)
		{
			if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
		}
	}
	for(i=0;i<6;i++)
	printf("%d ",a[i]);
}
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
