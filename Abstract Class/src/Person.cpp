//
// Created by Usuario on 20/3/2022.
//

#include "Person.h"
const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person() {}

Person::~Person() {

}


