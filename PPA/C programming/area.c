#include<stdio.h>
int main()
{

    float radius =0.0;
    const float PI = 3.14;
    float area = 0.0;

    printf("enter the radius");
    scanf("%f",&radius);

    area = PI * radius *radius;

    printf("area is : %f \n",area);

    return 0 ;
}