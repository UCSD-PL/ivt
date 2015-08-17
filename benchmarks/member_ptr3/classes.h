#ifndef __CLASSES__H_
#define __CLASSES__H_

#include <iostream>
#include <typeinfo> // For std::bad_cast

class VBase
{
public:
    VBase() {}
    virtual ~VBase() {}
    virtual void f();
    virtual void g();
    //virtual void h();
    //int a;
};

class Derived : public virtual VBase
{
public:
    Derived() {}
    virtual ~Derived() {}
    virtual void f();
    virtual void g();
    virtual void h();
    //virtual void i();
    //int b;
};

#endif
