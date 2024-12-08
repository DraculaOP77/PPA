#include<stdio.h>
int main()
{
    int no = 11;
     int *nop = &no;

     printf("%d\n",no); // 11
     printf("%d\n",&no); // 
    printf("%d\n",sizeof(no)); // 4bytes
    printf("%d\n",nop);     //
    printf("%d\n",&nop);  //
    printf("%d\n",*nop); //11
    printf("%d\n",sizeof(nop));// 8bytess

    return 0;
}