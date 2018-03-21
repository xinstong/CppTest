#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "B()" << endl;
    }
};

class C
{
public:
    C():b(),a(){}

private:
    A a;
    B b;
}; 


int main()
{
    C objc;
}
