#include<stdio.h>
void input_two_strings(char *a, char *b)
{
  scanf("%s%s",a,b);
}
int strcmp(char *a, char *b)
{
  for (int i=0;a[i]!='\0'&&b[i]!='\0';i++)
  {
    if (a[i]>b[i])
    return 1;
    else 
    if (a[i]<b[i])
    return 2;
    else
    return 0;
  }
}
void output(char *a, char *b, int result)
{
 if (result == 1)
 printf("%s is greater than %s \n", a, b);
 if (result == 2)
 printf("%s is greater than %s \n", b, a);
 if (result == 0)
 printf("%s is equalt to %s \n", a, b);
}
int main()
{
 char a[50], b[50];
 int result;
 printf("Enter the strings:\n");
 input_two_strings(a, b);
 result=strcmp(a, b);
 output(a, b, result);
 return 0;
}