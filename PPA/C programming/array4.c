#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,101,24};

    printf("base address of array: %d\n",arr);

    printf("base address of first element %d\n", &(arr[0]));

    printf("address of second element %d \n", &(arr[1]));

    printf("first element %d\n",arr[0]);

    printf("size of array %d\n",sizeof(arr));

    printf("size of second element of array : %d \n",sizeof(arr[1]));
    return 0;
}