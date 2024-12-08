#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class employee
{
    char name[20];
    int id;
    double salary;
     public :

     void accept()
     {
        cin>>name;
        cin>>id;
        cin>>salary;

        
     } 

     void display()
     {
        cout<<"name :\n "<<name;
        cout<<"id : \n "<<id;
        cout<<salary;

     }
     

};

int main()
{

    employee obj[6];
    fstream f;
    int i=0,n=0;

    f.open("base.txt");

    cout<<"enter no of emplo\n";
    cin>>n;

    for(i=0; i<n;i++)
    {
        obj[i].accept();

        f.write((char*)&obj[i],sizeof obj[i]);

    }
    f.close();

    f.open("base.txt",ios::in);
    cout<<"info of emploayee \n";
      for(i=0;i<n;i++){
     
     f.read((char*)&obj[i],sizeof obj[i]);

     obj[i].display();
    }
} 