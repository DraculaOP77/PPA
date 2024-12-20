
abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("inside constructor");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun();    // virtual void fun() = 0
    

     void gun()
    {
        System.out.println("inside gun");
    }
}

class Hello extends Demo
{
    public Hello()
    {
        System.out.println("inside hello constructor");
    }

    public void fun()
    {
        System.out.println("inside fun");
    }

}





class AbstractDemo
{
    public static void main(String arg[])
    {
       Hello hobj = new Hello() ; 
       hobj.fun();
       hobj.gun();          
    }
}
