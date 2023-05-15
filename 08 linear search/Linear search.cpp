#include <stdio.h>
int main()
{
int array[100], search, c, n;
int count=0;
printf("Enter number of elements in array\n");
count++;
scanf("%d", &n);
count++;
printf("Enter %d integers\n", n);
count++;
count++; 
  for (c = 0; c < n; c++)
  {
  	    count++;
  	    count++;
    scanf("%d", &array[c]);
      count++;
  }
  count++;
  printf("Enter a number to search\n");
  count++;
  scanf("%d", &search);
  count++;
  count++;
  for (c = 0; c < n; c++)
  {
    count++;
  	count++;
    if (array[c] == search)  
    {
      printf("%d is present at location %d.\n", search, c+1);
      count++;
      break;
    }
  }
  count++;
  if (c == n)
    printf("%d isn't present in the array.\n", search);
    count++;
    printf("time complexity is: %d",count);
}
