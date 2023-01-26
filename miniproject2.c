
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k,n,m,flag=0;
	printf("Enter the size of array 1\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array 1\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of array 2\n");
	scanf("%d",&m);
	int b[m];
	printf("Enter the elements of array 2\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[n+m];
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[n]=b[i];
			n++;
		}
		flag=0;
	}
	printf("The new array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
}