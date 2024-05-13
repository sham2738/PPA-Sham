#include<iostream>
using namespace std;

const int A = 10;  //constant global variable
int B = 20;

class Demo
{
    public:
        int X,Y;
        Demo()
        {
            X = 10;
            Y = 20;
        }
        void fun()
        {
            cout<<"Inside fun\n";
            X++;
            Y++;
        }
        void gun() const //constant function
        {
            cout<<"Inside gun\n";
            X++;
            Y++;
        }

};

int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();
    
    return 0;
}