#include <stdio.h>
int input_n()
{
  int a;
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int i, sum=0;
  for (i=1;i<=n;i++)
  sum=sum+i;
  return sum;
}
void output(int n, int sum)
{
  int j;
  for (j=1;j<n;j++)
  printf("%d+",j);
  printf("%d is %d\n",n,sum);
}
int main()
{
  int n, sum=0;
  printf("Enter the number\n");
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
}