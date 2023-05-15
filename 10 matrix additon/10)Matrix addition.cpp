#include<stdio.h>
main()
{
	int m,n,c,d,first[10][10],second[10][10],sum[10][10],count=0;
	count++;
	printf("enter the number of rows and coloumns of matrix:");
	count++;
	scanf("%d%d",&m,&n);
	count++;
	printf("enter the elements of first matrix\n");
	count++;
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&first[c][d]);
	count++;count++;
	printf("enter the elements of second matrix\n");
	count++;
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&second[c][d]);
	count++;count++;
	printf("sum of entered matrices\n");
	count++;
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			sum[c][d]=first[c][d]+second[c][d];
			printf("%d\t",sum[c][d]);
		}
		printf("\n");
		count++;
		count++;
		count++;
		count++;
    }
    printf("\ntime complexity is %d:",count);
    return 0;
}
