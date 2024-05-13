#include<iostream>
using namespace std;

const int A = 10;  //constant global variable
int B = 20;

class Demo
{
    public:
        const int X;
        const int Y;
        int Z;
        
        Demo(int i, int j, int k) : X(i), Y(j) //Initialization list
        {
            cout<<"Inside constructor\n";
            Z = k;
        }

};

int main()
{
    Demo obj1(11,21,51);

    obj1.Z++;
    
    return 0;
}