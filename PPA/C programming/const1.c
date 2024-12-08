#include<stdio.h>

int main()
{
    int x = 11;

    const int y = 11;  // read only variable , cannot be changed

    \
    
    x++;    // allowed
    x--;   //allowed
    x =21;   //allowed

   // y++;  not allowed
   // y--; not allowed
  // y cannot be changed as it is a constant
    return 0;
}