//Selection sort
#include<stdio.h>
main()
{
	int a[]={2,7,1,3,9,5};
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=i;j<6;j++)
		{
			if(a[i]>a[j])
			swap(&a[i],&a[j]);
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
