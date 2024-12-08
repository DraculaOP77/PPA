#include<iostream>

using namespace std;

int main()
{
    int no = 11;
    int &ref = no;

    cout<<no<<"\n";
    cout<<ref<<endl;

    int *p =&no;
    int *(&q)= p;

    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<&no<<"\n";
    cout<<&ref<<"\n";


    return 0;
}