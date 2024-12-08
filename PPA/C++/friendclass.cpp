#include<iostream>
using namespace std;

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
    friend void display();
};

void display()
{
    demo obj1;
    cout<<"value of i"<<obj1.i<<endl;
    cout<<"value of j"<<obj1.j<<endl;
    cout<<"value of k"<<obj1.k<<endl;

}

int main()
{
    display();

    return 0;
}
