#include <iostream>
#include <assert.h>
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

private:
    int a;
private:
    int b;
public:
    int c;
};


template <class class_type,
          class data_type1,
          class data_type2>
char*
access_order(data_type1 class_type::*m1,
             data_type2 class_type::*m2)
{
    assert(m1 != m2);
    return 
        (m1 < m2 
            ? "member1 occurs first"
            : "member2 occurs first");
}


int main()
{
    cout << "&A::a, &A::b -------->" << access_order(&A::a, &A::b) << endl;
    cout << "&A::b, &A::c -------->" << access_order(&A::b, &A::c) << endl;
    cout << "&A::a, &A::c -------->" << access_order(&A::a, &A::c) << endl;
}
