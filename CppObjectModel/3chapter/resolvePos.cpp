#include <iostream>
#include <typeinfo>
using namespace std;

typedef int TLength;

class A
{
public:
    void foo(TLength val)
    {
        _val = val;
        cout << "val=" << val << ", _val=" << _val << endl;
        cout << "typeid(val) is " << typeid(val).name() << endl;
        cout << "typeid(_val) is " << typeid(_val).name() << endl;
    }
private:
    typedef float TLength;
    TLength _val;
};

int main()
{
    A obj;
    TLength val = 1.2;
    cout << "typeid(main_val) is " << typeid(val).name() << endl;
    obj.foo(val);
}
