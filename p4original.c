#include <stdio.h>

int input()
{
  int n;
  printf("Enter number of fibo to find\n");
  scanf("%d",&n);
  return n;
}


int fibo(int n)
{
  if ( n == 1)
    return 0;
  else if (n == 2)
    return 1;
  else 
  return fibo(n-1)+fibo(n-2);
}

void output(int n,int f)
{
  printf("\n");
  printf("%dth term of fibonacci series is %d\n",n,f);
}

int main()
{
  int n,f;
  n=input();
  f=fibo(n);
  output(n,f);
  return 0;
}