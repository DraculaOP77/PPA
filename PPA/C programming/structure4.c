#include<stdio.h>

struct demo
{
    int *p;
    float *q;
    double d;
};

int main()
{
    struct demo obj;
    int i = 10;
    float k = 90.90;

    obj.p = &i;
    obj.q = &k;
    obj.d=90.9999;

    printf("%d \n",*(obj.p));
    printf("%f\n",*(obj.q));
    printf("%f\n",obj.d);

    





    return 0;
}
