#include<iostream>
using namespace std;

class hello
{
    public:
      void fun();
      void gun();

};

class demo 
{
    public:
    int i;
    private: int j;
    protected: int k;

    public:
     demo()
     {
        i = 10;
        j = 20;
        k = 30;
     }
   friend class hello;

};


// return_value class_name :: function_name()

void hello::fun()
{
    demo obj1;
    cout<<"value of i"<<obj1.i<<endl;
    cout<<"value of j"<<obj1.j<<endl;
    cout<<"value of k"<<obj1.k<<endl;


}

void hello::gun()
{
    demo obj1;
    cout<<"value of i"<<obj1.i<<endl;
    cout<<"value of j"<<obj1.j<<endl;
    cout<<"value of k"<<obj1.k<<endl;


}



int main()
{
  hello hobj;


    return 0;
}