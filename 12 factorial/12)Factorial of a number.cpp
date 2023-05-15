#include<stdio.h>
int main()
{
	int n,i,fact=1,count=0;
	printf("\n Enter the value of n:");
	count++;
	scanf("%d",&n);
	count++;
	count++;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		count++;
		count++;
		count++;	
	}
	count++;
	printf("\n factorial of %d is %d\n",n,fact);
	count++;
	printf("time complexity is: %d\n",count);
	return 0;
}
