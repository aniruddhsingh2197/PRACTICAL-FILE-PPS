#include <stdio.h>
int main()
{
  float deg_celsius,fahrenheit_temp;
  printf("enter temperature in celsius\n");
  scanf("%f", deg_celsius);
  fahrenheit_temp=(deg_celsius*9/5)+32;
  printf("\n fahrenheit Temperature is %f",fahrenheit_temp);
  return 0;
}
