#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};

    int *p = arr;  // int *p = &(arr[0]); same meaning

    int *q = &(arr[4]);

    return 0;
}