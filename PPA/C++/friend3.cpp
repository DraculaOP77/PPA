#include<iostream>
using namespace std;

class hello
{
    public:
    void display();

    
  
};

class demo
{
    public:
      int i;
    private:
      int j;
    protected:
    int k;
    demo()
    {
        i =10;
        j= 20;
        k = 30;
    }
    friend void hello::display();
};

 void hello:: display()
     {
        demo obj1;
        cout<<"value of i : "<<obj1.i<<endl;
        cout<<"value of j :"<<obj1.j<<endl;
        cout<<obj1.k<<endl;
     }


int main()
{
    hello obj;
    obj. display();

    return 0;
}