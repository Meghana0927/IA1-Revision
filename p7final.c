#include<stdio.h>
typedef struct Complex
{
  float real, imaginary;
}Complex;
Complex input_complex()
{
  Complex c;
  printf("Enter the real part:");
  scanf("%f",&c.real);
  printf("Enter the imaginary part:");
  scanf("%f",&c.imaginary);
  return c;
}
Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output(Complex a, Complex b, Complex c)
{
  printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is %0.1f + %0.1fi \n", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary);
}
int main()
{
  Complex c1, c2, c;
  c1=input_complex();
  c2=input_complex();
  c=add(c1, c2);
  output(c1,c2,c);
  return 0;
}