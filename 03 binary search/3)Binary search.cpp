#include <stdio.h>
int main()
{
	int i, low, high, mid, n, key, array[100];
	int count=0;
	printf("Enter number of elements: ");
	count++;
	scanf("%d",&n);
	count++;
	printf("Enter %d integers: ", n);
	count++;
	for(i = 0; i < n; i++)
	{
		count++;
		count++;
		scanf("%d",&array[i]);
		count++;
	}	
	count++;
	printf("Enter value to find: ");
	count++;
	scanf("%d", &key);
	count++;
	low = 0;
	count++;
	high = n - 1;
	count++;
	mid = (low+high)/2;
	count++;
	while (low <= high) 
	{
		count++;
		count++;
		if(array[mid] < key)
		{
			low = mid + 1;
			count++;
		}
		else if (array[mid] == key)
		{
			count++;	
			printf("%d found at location %d\n", key, mid+1); 
			break;
		}
		else
		high = mid - 1;
		count++;
		mid = (low + high)/2;
		count++;
	}
	count++;
	if(low > high)   
	printf("Not found! %d isn't present in the list.n\n", key);
	count++;
	printf("Time complexity : %d",count);
	return 0;
}
