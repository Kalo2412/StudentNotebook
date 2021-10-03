//
//  Class.cpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#include "Class.hpp"


Class::Class(){
    this->studentsNumber = 0;
    this->capacity = 0;
    this->students = nullptr;
}

bool Class::operator=(Class& newClass){
    if(this->studentsNumber == newClass.studentsNumber){
        
    }
    else return false;
    return true;
}

Class::Class(Class& newClass){
    copy(newClass);
}

Class::~Class(){
    free();
}

void Class::copy(Class& newClass){
    free();
    for(int i = 0; i < newClass.studentsNumber; i++){
        add_Student(newClass.students[i]);
    }
}

void Class::add_Student(Student& newStudent){
    if(capacity == studentsNumber){
        resize();
    }
    students[studentsNumber++] = newStudent;
}

Student* Class::get_students() const{
    return this->students; 
}


void Class::resize(){
    if(capacity != 0){
        this->capacity *= 1.5;
        Student* newStudents = new Student[capacity];
        for(int i = 0; i < studentsNumber; i++){
            newStudents[i] = this->students[i];
            }
        students = newStudents;
        delete [] newStudents;
    }
    else {
        capacity = 10;
        students = new Student[capacity]; 
    }
}

void Class::free(){
    this->capacity = 0;
    this->studentsNumber = 0;
    delete [] students;
}

unsigned Class::get_studentsNumber() const{
    return this->studentsNumber; 
}
