/*
 * =====================================================================================
 *
 *       Filename:  Virtual01Basic.cpp
 *
 *    Description:  Basic example of Virtual
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
    virtual int get() const {
      return 4;
    }

    /*int get() const {
      return 4;
    }*/
};

struct Derived : Base {
    int get() const {
      return 1;
    }
};

int get(const Base &b) {
  return b.get();
}

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA! (VIRTUAL)" << std::endl;  // display message

  Derived derived;

  return get(derived);
}  // end function main
