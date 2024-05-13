#include<iostream>
using namespace std;

float AreaOfCircle(float Radius, float PI = 3.14)
{
    float Ans = 0.0f;
    Ans = PI * Radius * Radius;
    return Ans;
}

int main()
{
    float Ret = 0.0f;

    Ret = AreaOfCircle(5.8, 3.14);
    cout<<"Area of circle: "<<Ret<<"\n";

    Ret = AreaOfCircle(5.8);
    cout<<"Area of circle: "<<Ret<<"\n";

    return 0;
}