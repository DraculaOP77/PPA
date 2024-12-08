#include<stdio.h>
 
int main()
{
    int std=0;
     
    printf("Primary school exam portal\n");

    printf("Enter your std");
    scanf("%d",&std);

    switch (std)
    {
    case 1:
        printf("your exam is at 1 pm\n");
        break;
    case 2:
    printf(" your exams is at 2 pm\n");
    break;
    case 3:
    printf("your exam is at 3pm");
    break;
        
    
    default:
    printf("\nInvalid input \n");
        break;
    }
}