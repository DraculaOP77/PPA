#include<stdio.h>

int main()
{
    int num1 = 0;
    int ans =0;

    printf("enter the number: \n");
    scanf("%d",&num1);

    ans = num1 % 2;

    if(ans==0) //== mhnje "madhe"(jr ans madhe 0 asel)   // if = jr 
    {
        printf("number is even");
    }

    else(ans==1); // else = tr
    {
        printf("number is odd");
    }
  


    return 0;
}