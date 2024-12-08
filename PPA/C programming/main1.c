#include<stdio.h>

int i;
int j =11; // global variable

extern int no;

int main()
{
    printf("value of %d\n",i);
    printf("value of %d\n",j);
    printf("value of %d\n",no);



    return 0;
}
