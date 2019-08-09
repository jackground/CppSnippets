/**
 * polymorphism
 *
 * Copyright (c) 2019, Jack Hawley.
 */

#include <iostream>
#include <string>

class Base {
 public:
  std::string GetName() { return "Base"; }
};

class Derived : public Base {
 private:
  std::string m_Name;

 public:
  explicit Derived(const std::string& name) : m_Name(name) {}

  std::string GetName() { return m_Name; }
};

int main(int argc, char const* argv[]) {
  std::string name = "jack";
  Derived b(name);
  Base *ap = &b;
  Derived* d = static_cast<Derived*> (ap);

  std::cout << d->GetName() << std::endl;


  return 0;
}
