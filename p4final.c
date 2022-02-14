#include <stdio.h>
int input_array_size()
{
  int a;
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  int i;
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
}
int sum_n_arrays(int n, int a[n])
{
  int j, sum=0;
  for (j=0;j<n;j++)
  sum+=a[j];
  return sum;
}
void out_put(int n, int a[n], int sum)
{
  int k;
  for (k=0;k<n-1;k++)
  printf("%d+",a[k]);
  printf("%d is %d\n",a[n-1],sum);
}
int main()
{
  int n, sum=0;
  printf("Enter the array size\n");
  n=input_array_size();
  int a[n];
  printf("Enter the numbers\n");
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
}