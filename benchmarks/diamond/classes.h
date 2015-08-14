#ifndef __CLASSES_H__
#define __CLASSES_H__

class A {
public:
  virtual ~A();
  virtual void f();
  virtual void g();
  virtual void h();
};

class B : public virtual A {
public:
  virtual ~B();
  virtual void f();
  virtual void g();
};

class E {
public:
  virtual ~E();
  virtual void x();
};

class C : public virtual A {
public:
  virtual ~C();
  virtual void f();
  virtual void h();
};

class D : public virtual B, public virtual C {
public:
  virtual ~D();
  virtual void f();
  virtual void g();
  virtual void h();
  virtual void t();
};

#endif
