#include <stdio.h>
int main()
{
  int pincode=0, tempdigit;
  int l1,l2,l3;
  int digitcount=1;
  int i = 1;
  while(digitcount <=6);
  {
    print("enter pincode digit%d \n" digitcount);
    scanf("%d",&tempdigit);
    pincode=pincode*10+ tempdigit;
    digitcount ++;
  }
  l1 = pincode%10;
  pincode /= 10;
  l2 = pincode%10;
  pincode/=10;
  l3 = pincode%10;
  printf("%d,%d,%d",l3,l2,l1);
  
}
