#include<stdio.h>
int add(int num1,int num2)
{
    int sum =0;
    sum =num1 + num2;
    return sum;
}

int sub(int num1,int num2)
{
    int sub = 0;
    sub = num1-num2;

    return sub;
}

int multi(int num1 , int num2)
{
    int multi=0;
    multi=num1*num2;
    return multi;
}

int division (int num1 ,int num2)
{
    int div = 0;
    div=num1/num2;
    return div;
}

int main()
{
    int no1 = 0;
    int no2 =0;
    int ans=0;

    int cal =0;
    
    printf("1.add 2.sub 3.multiplication 4.division\n");
    printf("enter the no of requied calculation\n");
    scanf("%d",&cal);

    printf("enter first number\n");
    scanf("%d",&no1);

    printf("enter second number \n");
    scanf("%d",&no2);
   if (cal==1)
   {
    ans=add(no1,no2);
    printf("addition is :%d",ans);

   }
   else if (cal==2)
   {
    ans=sub(no1,no2);
    printf("substraction is:%d ",ans);

   }
   else if (cal ==3)
   {
    ans=multi(no1,no2);
    printf("multiplication is %d",ans);
   }
   else if (cal==4)
   {
    ans= division(no1,no2);
    printf("division is %d",ans);
   }
   
   return 0;

}