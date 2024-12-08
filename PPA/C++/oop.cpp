

#include<iostream>
using namespace std;

class demo
{
    public:
         int i;
         int j;

         void func()
         {
            cout<<"inside function of class demo \n";
         }


};


int main()
{
    demo obj1;
    demo obj2;

    obj1.i=11;
    obj1.j=12;

    obj2.i = 10;
    obj2.j = 20;

    obj1.func();  // function call
    obj2.func();  // function call
    

    cout<<obj1.i;
    return 0;
}