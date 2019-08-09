/**
 * Deleting dynamic instance of derived class
 *
 * Copyright (c) 2019, Jack Hawley.
 */

#include <iostream>

class base {
 public:
  base() { std::cout << "base construction" << std::endl; }
  ~base() { std::cout << "base DESTRUCTOR" << std::endl; }
};

class derived : public base {
 private:
  char* name;

 public:
  derived() {
    std::cout << "derived construction" << std::endl;
    name = new char[10];
    std::cout << "memory allocated for name" << std::endl;
  }
  ~derived() {
    std::cout << "derived DESTRUCTOR" << std::endl;
    delete[] name;
    std::cout << "memory de-allocated for name" << std::endl;
  }
};

int main(int argc, char const* argv[]) {
  derived *derivedPointer = new derived();
  delete derivedPointer;
  return 0;
}
