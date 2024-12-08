#include<stdio.h>

struct demo 
{
    int i ;
    char ch;
    float f;
    int d;


};

int main()
{
    struct demo obj ;
    printf("%d",sizeof(obj));
    return 0;
    
}