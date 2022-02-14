#include <stdio.h>
void input(int *a, int *b)
{
  scanf("%d%d",a,b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("Sum of %d and %d is %d \n",a,b,sum);
}
int main()
{
  int a, b, sum;
  printf("Enter the numbers\n");
  input(&a, &b);
  add(a,b,&sum);
  output(a,b,sum);
}