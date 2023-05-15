#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int count=0;
bool is_prime(int n) 
{
    if (n <= 1)
	 {
        return false;
    }
    count++;
	count++;
    for (int i = 2; i*i <= n; i++) 
	{
		
		count++;
		count++;
        if (n % i == 0)
		 {
            return false;
        }
        count++;
    }
    count++;
    return true;
}

int reverse(int n) 
{
    int reversed = 0;
	count++;
    while (n > 0)
	 {
	 	count++;
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        count++;
        count++;
        n /= 10;
        count++;
    }

    return reversed;
}

int main() {
    int N;
    int tc;
    printf("Enter the limit N: ");
    count++;
    scanf("%d", &N);
    count++;
 printf("Prime numbers whose reverse is also prime:\n");
 count++;
 int count=0;
  for (int i = 2; i <= N; i++) 
	{
		count++;
		count++;
	    if (is_prime(i) && is_prime(reverse(i)))
		 {
            printf("%d\n", i);
            }
        count++;
    }
    count++;
    
    tc=N*sqrt(N);
    count++;
    printf("The Time complexity is %d\n",count);
}
