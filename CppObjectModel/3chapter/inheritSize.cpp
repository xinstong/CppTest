#include <iostream>
using namespace std;

class A
{
    void foo(){ static int i = 0; cout << i << endl; }
};

class B : public virtual A
{

};

class C : public virtual A
{

}; 

class D : public virtual B
	, public virtual C
{

};


int main()
{
    cout << "A size : " << sizeof(A) << endl;
    cout << "B size : " << sizeof(B) << endl;
    cout << "C size : " << sizeof(C) << endl;
    cout << "D size : " << sizeof(D) << endl;
}
