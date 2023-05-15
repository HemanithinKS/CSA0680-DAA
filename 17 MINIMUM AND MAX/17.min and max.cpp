#include<stdio.h>
int max, min;
int a[100],count=0;
int maxmin(int i, int j)
{
 int max1, min1, mid;
 count++;
 if(i==j)
 {
 	count++;
  max = min = a[i];
 }
 else
 {
 	 count++;
  if(i == j-1)
  {
  	 count++;
   if(a[i] <a[j])
   {
   	 count++;
    max = a[j];
     count++;
    min = a[i];
   }
   else
   {
   	 count++;
    max = a[i];
     count++;
    min = a[j];
   }
  }
  else
  {
   mid = (i+j)/2;
   maxmin(i, mid);
   max1 = max; min1 = min;
   maxmin(mid+1, j);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
  }
 }
}
int main ()
{
 int i, num;
 printf ("\nEnter the total number of numbers : ");
  count++;
 scanf ("%d",&num);
  count++;
 printf ("Enter the numbers : \n");
  count++;
   count++;
 for (i=1;i<=num;i++)
 {
 	count++;
 	count++;
 	scanf ("%d",&a[i]);
    count++;
 }
  count++;
 max = a[0];
 min = a[0];
 maxmin(1, num);
 printf ("Minimum element in an array : %d\n", min);
 count++;
 printf ("Maximum element in an array : %d\n", max);
 count++;
printf("Time complexity is %d\n",count);
 return 0;
}
