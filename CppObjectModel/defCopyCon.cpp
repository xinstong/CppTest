#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : public A
{
public:
    int b;
};

int main()
{
    B objb;
    objb.b = 2;
    A a(objb);
    cout << a.a << endl;
}
