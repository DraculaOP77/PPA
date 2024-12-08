#include<stdio.h>
int whilee(int count)
{
    int i = 1; 
    while (i<=count)
    {
       printf("jay ganesh..\n");
       i++;
    }
    return 0;
      

}
int main()

{

    int cout=0;
    printf("num of iterations\n");
    scanf("%d",&cout);
    cout=whilee(cout);

    return 0;
}