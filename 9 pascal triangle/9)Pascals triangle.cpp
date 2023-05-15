#include <stdio.h>
int main()
{
    int no_row,c=1,k,i,j;
    int count=0;
    printf("Input number of rows: ");
    count++;
    scanf("%d",&no_row);
      count++;
        count++;
    for(i=0;i<no_row;i++)
    {
    	  count++;
    	    count++;
    	    count++;
        for(k=1;k<=no_row-i;k++)
    	{
    		count++;
    		count++;
			printf("  ");
            count++;
			}    
        
        
            count++;
        for(j=0;j<=i;j++)
        {
        	  count++;
        	    count++;
        	      count++;
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
              count++;
                count++;
        }
          count++;
        printf("\n");
          count++;
    }
       printf("Time complexity:%d\n",count);
}
