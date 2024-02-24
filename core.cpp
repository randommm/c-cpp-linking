#include "core.hpp"
#include <iostream>
#include <string>

MyClass::MyClass() {
  std::cout << "MyClass default constructor called" << std::endl;
}
MyClass::MyClass(std::string &mstr) : mstr(mstr) {
  std::cout << "MyClass constructor called with mstr set to " << mstr
            << std::endl;
}

MyClass::~MyClass() { std::cout << "MyClass destructor called" << std::endl; }

void MyClass::concat(std::string &s) {
  std::cout << "MyClass concat called" << std::endl;
  this->mstr = this->mstr + s;
}

void MyClass::print() { std::cout << this->mstr << std::endl; }

void testing() {
  MyClass my_class_1;

  std::string s1{"John"};
  MyClass my_class_2(s1);

  std::string s2{"John"};
  my_class_2.concat(s2);
}
