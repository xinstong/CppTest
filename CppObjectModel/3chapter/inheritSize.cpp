#include <iostream>
using namespace std;

class A
{

};

class B : public A
{

};

class C : public A
{

}; 

class D : public B
	, public C
{

};


int main()
{
    cout << "A size : " << sizeof(A) << endl;
    cout << "B size : " << sizeof(B) << endl;
    cout << "C size : " << sizeof(C) << endl;
    cout << "D size : " << sizeof(D) << endl;
}
