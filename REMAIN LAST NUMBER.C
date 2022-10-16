#include <stdio.h>
int main()
{
  int number, last_digit;
  printf("enter the number\n");
  scanf("%d",&number);
  last_digit=number%10;
  printf("%d",last_digit);
  return 0 ;
}
