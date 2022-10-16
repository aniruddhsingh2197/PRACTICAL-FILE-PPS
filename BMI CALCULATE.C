#include <stdio.h>

int main()
{
    float height ,weight ,bmi;
    printf("enter weight(kg)\n");
    scanf("%f", &weight);
    printf("enter height(n)\n");
    scanf("%f", &height);
    bmi = weight/(height*height);
    printf("\n BMI = %f",bmi);
    return 0;
}
