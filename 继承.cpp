#include <iostream>
using namespace std;

class A{
public:
    A():i(0) {cout << "A::A()" << endl;} //注意构造函数后面的初始化
    ~A() {cout << "A::~A()" << endl;}
    void print() {cout << "A::f()" << i << endl;}
protected: //只有A类本身及其子类能调用
    void set(int ii) {i = ii;}
private:
    int i;
};

class B : public A{
public:
    void f(){set(20);print();} //调用父类的protected、public函数
};

int main()
{
    B b;
    // b.set(10);
    b.print();
    b.f();
    return 0;
}