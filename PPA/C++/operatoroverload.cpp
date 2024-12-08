#include<iostream>
using namespace std;

class demo
{
    public:
      int i,j;
      demo(int a = 10, int b =20)
      {
        i = a;
        j = b;
      }

};

int main()
{
  demo obj1(11,21);
  demo obj2(5,6);
  demo obj3(0,0);


  obj3 = obj1 + obj2;


    return 0;
}