#include<stdio.h>

void func()
{
   static int i = 10;
    i++;
    printf("value of i %d\n",i);
}

int main()
{
    func();
    func();
    func();
    return 0;
}
