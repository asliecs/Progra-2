//
// Created by Usuario on 20/3/2022.
//

#ifndef ABSTRACT_CLASS_PERSON_H
#define ABSTRACT_CLASS_PERSON_H
#include<iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person();

    virtual ~Person();

    virtual string speak() const = 0;

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);


};


#endif //ABSTRACT_CLASS_PERSON_H
