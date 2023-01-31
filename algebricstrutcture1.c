#include<stdio.h>
int main()
{
	int i,j,l,n;
	printf("operation perform + modulo n:check algebric or not\n");
	printf("enter the set :");
	scanf("%d",&n);
	int a[n];
	int b[n][n];
	printf("\nenter the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		b[i][j]=a[i]+a[j];
	}
	
	}
	printf("enetr the modulo no.:");
	scanf("%d",&l);
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		b[i][j]=b[i][j]%l;
	}
	
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		printf("%d ",b[i][j]);
	}
	printf("\n")	;
	}
	int c=0;
	int h=0;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		if(a[h]==b[i][j])
		{
			c++;
			h++;
		}
	}
	
	}
	if(c==n)
	{
		printf("\nit is an algebric structure:");
	}
	else 
	printf("not a algebric struture:");
return 0;	
}

