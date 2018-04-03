#include <iostream>
using namespace std;

class A
{
public:
    ~A(){ cout << "~A" << endl; }

private:
    int a;
};

class B : public A
{
public:
    ~B(){ cout << "~B" << endl; }

private:
    int b;
};


int main()
{
    A* pA = new B[10];
    //delete pA;

    cout << "_____________" << endl;

    A* pA1 = new B[10];
    delete[] pA;
}
