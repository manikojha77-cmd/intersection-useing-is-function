#include<stdio.h>
void intersection(int a[],int n,int m,int b[]);
int main()
{
	int i,n,m;
	printf("Enter the first array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the second array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the second array size:");
	scanf("%d",&m);
	int b[m];
	printf("Enter second array elements\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	intersection(a,n,m,b);
	return 0;
}
void intersection(int a[],int n,int m,int b[])
{   
	printf("Intersection is :");
	int i,j,f;
	for(i=0;i<n;i++)
	{ 
		f=0;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				f=1;
				break;
			}
		}
		if(f==1)
		printf("%d ",b[j]);
	}
}
