#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }

    A(const A& oa)
    {
        a = oa.a;
        cout << "A(A oa)" << endl;
    }

    int a;
};

class B : public A
{
public:
    int b;
};

void fun(A ina)
{
    
}


int main()
{
#if 0
    B objb;
    objb.b = 2;
    A a(objb);
    cout << a.a << endl;
#endif
    A objA;
    fun(objA);

}
