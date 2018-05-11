#include<stdio.h>
void swap(int *x,int *y)
{
	int i;
	i=*x;
	*x=*y;
	*y=i;
}
void sorting(int n[10])
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(n[j+1]>n[j])
			{
				swap(&n[j+1],&n[j]);
			}
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",*(n+i));
	
}
main()
{
	int i;
	int n[10],*p[10];
	for(i=0;i<10;i++)
	scanf("%d",&n[i]);
	sorting(n);
	

}
