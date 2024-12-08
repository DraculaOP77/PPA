#include<stdio.h>
int cal(int num1,int num2,int calc)
{
    int ans =0;
    switch (calc)
    {
    case 1:
        ans =num1+num2;
        return ans;
        break;
    case 2:
         ans=num1-num2;
         return ans;
         break;

    default:
        break;
    }
}
int main()
{
    int no1=0;
    int no2=0;
    int calca = 0;
   int  answer =0;
    printf("1.add 2.sub\n");
    printf("enter calculation no");
     scanf("%d",&calca);

     printf("enter 1st number");
     scanf("%d",&no1);

     printf("enter second number");
     scanf("%d",&no2);

     answer =cal(no1,no2,calca);
     printf("%d",answer);


    return 0;
}