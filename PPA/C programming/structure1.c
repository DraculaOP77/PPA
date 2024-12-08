#include<stdio.h>

#pragma pack(1)
struct demo
{
   int no ;
   float f;
   float d;
   int x;
  
 };


int main()
{
    struct demo obj;

    printf("size of structure is %d\n",sizeof(obj));

    return 0;
}

