#include <iostream>
#include <typeinfo>
using namespace std;


class A
{
public:
    static const int val;
    const int i = 1;
};

int main()
{
    A objA;
    cout << "typeid(a::val) is " << typeid(&A::val).name() << "\t" << typeid(&A::val).hash_code() << endl;
    cout << "typeid(objA.val) is " << typeid(&objA.val).name() << "\t" << typeid(&objA.val).hash_code() << endl;
    cout << "typeid(objA.i) is " << typeid(&objA.i).name() << "\t" << typeid(&objA.i).hash_code() << endl;
}
