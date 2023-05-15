#include<stdio.h>
int main()
{
int size, i, largest;
int count=0;
printf("\n Enter the size of the array: ");
count++;
scanf("%d", &size);
count++;
int array[size];
printf("\n Enter %d elements of the array: \n", size);
count++;
count++;
for (i = 0; i < size; i++)
{
	count++;
	count++;
scanf(" %d", &array[i]);
count++;
}
count++;
largest = array[0];
count++;
count++;
for (i = 1; i < size; i++)
{
	count++;
	count++;
if (largest < array[i])
largest = array[i];
}
printf("largest element present in the given array is : %d\n", largest);
count++;
printf("time complexity:%d",count);
count++;
return 0;
}
