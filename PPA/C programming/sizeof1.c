#include<stdio.h>
int main() 
{
    char ch ='A';
    int i = 15;
    float f = 12.345f;
    double d =89.10;

    printf("size of char : %d bytes\n",sizeof(ch));
    printf("size of integer ;%d bytes\n",sizeof(i));
    printf("size of float : %d bytes\n",sizeof(f));
    printf("size of double :%d bytes\n",sizeof(d));

   
    printf("base address of char is :%d\n",&ch);     // l address
     printf("base address of integer is :%d\n",&i);
      printf("base address of float is :%d\n",&f);
       printf("base address of double is :%d\n",&d);




    return 0;

}