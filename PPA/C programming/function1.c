#include<stdio.h>
void display()
{
    printf("inside display.....\n");
   

}
int main()
{
    printf("inside main....\n"); //we didnt call function(display)
    display();
    return 0;
}