#include<stdio.h>
int main()
{
 double arr[]={1.5,2.5 ,1.6};
 double *p =arr;
 double *q =&(arr[1]);

 printf("%lf,%lf",*p,*q);
     
    
}