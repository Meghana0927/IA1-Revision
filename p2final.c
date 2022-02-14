#include <stdio.h>
int input()
{
  int i;
  scanf("%d",&i);
  return i;
}
int cmp(int a, int b, int c)
{
  if (a>b&&a>c)
  return a;
  else
  if (b>c)
  return b;
  else
  return c;
}
void output(int a,int b, int c, int largest)
{
  printf("Largest of %d, %d, %d is %d \n",a,b,c,largest);
}
int main()
{
  int a, b, c, largest;
  printf("Enter the numbers\n");
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
}