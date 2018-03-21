#include <iostream>
using namespace std;

class A
{
public:
    A(int i)
    : a(i)
    {
        cout << "A()" << endl;
    }

private:
    int a;
};

class B
{
public:
    B(int i)
    : b(i)
    {
        cout << "B()" << endl;
    }

private:
    int b;
};

class C
{
public:
    C():b(1),a(2){}

private:
    A a;
    B b;
}; 


int main()
{
    C objc;
}
