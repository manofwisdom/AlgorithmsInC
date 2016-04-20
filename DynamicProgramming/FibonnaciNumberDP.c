/*Author: Alok Sharma
* This prints the Fibonacci number for a given number using Dynamic Programming.
*/

#include<stdio.h>

int Fib(int n)
{
  int i, j;
  int memo[n];
  if(n==0 || n==1)
  {
      return 1;
  }
  memo[0] =1;
  memo[1] =1;
  for(i=2;i<n;i++)
  {
    memo[i] = Fib(n-1)+Fib(n-2); //Calculate only once the Fibonacci numbers till n-1 and store them in this array
  }
  return memo[n-1];
}


int main(void)
{
  int n,i;
  printf("Enter the number of terms you want in Fibonacci series \n");
  scanf("%d",&n);
  printf("The Fibonacci number for %d is: \n",n);
  printf("%d",Fib(n));
}
