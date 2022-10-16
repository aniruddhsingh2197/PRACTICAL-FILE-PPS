#include <stdio.h>

int main()
{
    int num1,num2,temp;
  printf("enter num1 \n");
  scanf("%d",&num1);
  printf("enter num2 \n");
  scanf("%d",&num2);
  printf("before swap num1,num2 = %d,%d", num1,num2);
  temp = num1;
  num1 = num2;
  printf("After swap num1 ,num2 = %d,%d", num1 ,num2);
  return 0 ;
}
