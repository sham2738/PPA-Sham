
class Base
{
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }

    public final void Gun()
    {
        System.out.println("Inside Base Gun");
    }
}

class Derived extends Base
{
    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class final2
{
    public static void main(String A[])
    {
        
    }
}