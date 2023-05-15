#include<stdio.h>
int main()
{
	int a,b,c,n,i,count=0;
	printf("Enter the Length of the Series: ");
	count++;
	scanf("%d",&n);
	count++;
	a=0;
	count++;
	b=1;
		count++;
	c=1;
		count++;
	printf("%d,%d",a,b);
		count++;
			count++;
	for(i=2;i<=n-1;i++)
	{
		count++;
		count++;
		printf(",%d",c);
		count++;
		a=b;
		count++;
		b=c;
		count++;
		c=a+b;
		count++;
	}
	printf("\ntime complexity is %d:",count);
	return 0;
}
