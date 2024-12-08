#include<stdio.h>
int main()
{
    char c = 'A';
    int i = 10;
    float f = 31.90f ;
    double d = 90.56474;

    char *cp = &c;
    int *ip=&i;
    float *fp = &f;
    double*dp= &d;

    printf("%c",*cp);
    

    return 0;
}