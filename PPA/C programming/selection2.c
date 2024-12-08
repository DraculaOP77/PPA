#include<stdio.h>
 int main()
 {
    int std = 0;
     
    printf("Primary school portal\n");

    printf(" enter the std\n");
    scanf("%d",&std);
    
    if(std==1)
    {
    printf("your exam is at 1 pm");
    } 
    else if(std==2)
    {
        printf(" your exam is at 2pm");

    }
    else if(std==3)
    {
        printf("your exam is at 3pm");
    }
    else if(std==4)
    {
        printf("your exam is at 4pm");

    }
    else{
        printf("invalid std");

    }





     return 0;
 }