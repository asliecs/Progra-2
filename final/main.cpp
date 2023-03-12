/*
 * =====================================================================================
 *
 *       Filename:  Override02Final.cpp
 *
 *    Description:  Basic example overriding with final
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
  virtual void doSomething() const {
  }
};

struct Intermediate : Base {
  void doSomething() const final {
    std::cout << "Hola Intermedio!!!" << std::endl;
  }
};

struct Derived : Intermediate {
  void doSomething() const override {
    std::cout << "Hola Mike!!!" << std::endl;
  }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
  std::cout << "Welcome to the UNA! (VIRTUAL)" << std::endl;

  Derived derived;

  derived.doSomething();

}  // end function main
