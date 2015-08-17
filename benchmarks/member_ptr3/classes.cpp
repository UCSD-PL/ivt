#include "classes.h"
#include <iostream>

void VBase::f() {std::cout << "VBase::f" << std::endl;}
void VBase::g() {std::cout << "VBase::g" << std::endl;}
//void VBase::h() {std::cout << "VBase::h" << std::endl;}

void Derived::f() {std::cout << "Derived::f" << std::endl;}
void Derived::g() {std::cout << "Derived::g" << std::endl;}
void Derived::h() {std::cout << "Derived::h" << std::endl;}
//void Derived::i() {std::cout << "Derived::i" << std::endl;}
