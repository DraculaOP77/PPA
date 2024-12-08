#include<iostream>

using namespace std;

int main()
{
    int arr[4] ={10,20,30,40};
    int (&brr) [4] =arr;

    cout<<arr[1]<<endl
    ;
    cout<<brr[1]<<endl;

    return 0;
}