#include<stdio.h>

int add(int val1,int val2)
{
    int sum=0;
    sum= val1 + val2;
    return sum;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("Enter first number: "); // Asking for user input of the first and second number to be added together 
    // & is necessary & is address assigner 
    scanf("%d",&num1);

    printf("enter second number:"); //input second number
    scanf("%d",&num2);

    int ret=0;
    ret=add( num1, num2);
    printf("the addition is : %d",ret);

    return 0;
}