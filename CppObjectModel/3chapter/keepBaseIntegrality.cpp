#include <iostream>
#include <typeinfo>
using namespace std;

class A
{
public:
    int i;
    char c1;
    char c2;
    char c3;
};

class A1
{
public:
    int i;
    char c1;
};

class A2 : public A1
{
public:
    char c2;
};

class A3 : public A2
{
public:
    char c3;
};


int main()
{
    cout << "size of A  = " << sizeof(A) << endl;
    cout << "size of A1 = " << sizeof(A1) << endl;
    cout << "size of A2 = " << sizeof(A2) << endl;
    cout << "size of A3 = " << sizeof(A3) << endl;
}
