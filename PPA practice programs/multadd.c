#include<stdio.h>

int sum ()
{
    int a =0;
    int b= 0;
    int add=0;
    printf("enter first number \n");
    scanf("%d\n",&a);
    printf("enter second number \n");
    scanf("%d\n",&b);
    add = a+b;
    return add;
}

int main()
{
    int i =0;
    int d =0;
    printf("num of executions\n");
    scanf("%d",&d);
    int ans =0;
    for(i = 0;i <=d;i++)
    {
        ans=sum();
        printf("ans is %d\n",ans);
    }
    
    
    return 0;
}