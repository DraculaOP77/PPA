#include<stdio.h>

void display()
{
    int no =11; // by default internally "auto int no = 11;"
    int i;
    auto int j = 21;

    printf("value of no %d\n",no);
    printf("value of i %d",i);
    printf("%d",j);
}

int main()

{
    display();
    
    

    return 0;
}