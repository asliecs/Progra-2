//
// Created by Usuario on 20/3/2022.
//

#ifndef ABSTRACT_CLASS_TEACHER_H
#define ABSTRACT_CLASS_TEACHER_H
#include "Person.h"

class Teacher: public Person{
public:
    Teacher();

    virtual ~Teacher();

    virtual string speak() const;
    string teach();

};


#endif //ABSTRACT_CLASS_TEACHER_H
