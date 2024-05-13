
class Base 
{
    public int A,B;
    public Base()
    {
        System.out.println("Base Constructor\n");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun\n");
    }

}


class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor\n");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun\n");
    }

}

class DerivedX extends Base
{
    public int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX Constructor\n");
    }
    public void Sun()
    {
        System.out.println("Inside DerivedX Sun");
    }
}


class Hierarchal
{
    public static void main(String args[])
    {
       Base dobj = new DerivedX();
       dobj.Fun();
       

    }
}
