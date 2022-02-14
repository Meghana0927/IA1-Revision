#include <stdio.h>
float input()
{
  float i;
  scanf("%f",&i);
  return i;
}
float my_sqrt(float n)
{
  float sqrt, temp;
  sqrt = n/2;
  temp = 0;
  while(sqrt != temp)
  {     
    temp = sqrt;
    sqrt = (n/temp + temp) / 2;
  }
  return sqrt;
}
void output(float n, float sqrt_result)
{
  printf("The square root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float n, sqrt_result;
  printf("Enter the number:\n");
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
}