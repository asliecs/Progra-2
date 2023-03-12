//
// Created by Usuario on 20/3/2022.
//

#ifndef ABSTRACT_CLASS_STUDENT_H
#define ABSTRACT_CLASS_STUDENT_H
#include "Person.h"

class Student: public Person{
public:
    Student();

    virtual ~Student();

    virtual string speak() const;
    string study();
};


#endif //ABSTRACT_CLASS_STUDENT_H
