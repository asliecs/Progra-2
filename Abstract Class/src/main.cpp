//
// Created by Usuario on 20/3/2022.
//
#include "Student.h"
#include "Teacher.h"

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    Student student;
    std::cout << "Student: " + student.speak() << std::endl;
    std::cout << "Study: " + student.study() + "\n" << std::endl;

    Teacher teacher;
    std::cout << "Teacher: " + teacher.speak() << std::endl;
    std::cout << "Teach: " + teacher.teach() << std::endl;

    //prueba de operator<<



    return 0;
}