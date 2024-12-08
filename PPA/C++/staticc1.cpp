#include<iostream>

using namespace std;

class demo

{
    public:
    int i;
    int j;
    static int k;

    demo(int a = 10, int b =20)
    {
        i = a;
        j = b;
    }

    void display()
    {
        cout<<"value of i"<<i<<endl;
         cout<<"value of j"<<j<<endl;
          cout<<"value of k"<<k<<endl;

    }

    static void fun()
    {
        cout<<"inside static funcn"<<endl;
        cout<<"value of k"<<k<<endl;
    }
};

int demo :: k=111;

int main()
{
    cout<<"value of k";


    return 0;

}