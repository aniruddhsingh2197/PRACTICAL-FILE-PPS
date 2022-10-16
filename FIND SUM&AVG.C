#include <stdio.h>
int main()
{
  int n1 ,n2 ,n3 ,n4 ,n5 ,sum,avg;
  printf("enter 5 marks:n1,n2,n3,n4,n5");
  scanf("%d,%d,%d,%d,%d",&n1 ,&n2 ,&n3 ,&n4 ,&n5);
  sum=n1+n2+n3+n4+n5;
  avg = sum/5;
  printf("sum = %d\n"; sum);
  printf("Avg = %d\n"; avg);
  return 0 ;
}
