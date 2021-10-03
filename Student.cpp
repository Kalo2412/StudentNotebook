//
//  Student.cpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#include "Student.hpp"

Student::Student(){
    this->name = "";
    this->classId = 0;
}

Student::Student(const std::string& name, const unsigned id) : name(name), classId(id){}; 

unsigned Student::get_classId() const{
    return this->classId;
}

void Student::set_classId(const unsigned id){
    this->classId = id;
}

std::string Student::get_name() const{
    return this->name;
}

void Student::set_name(const std::string& name){
    this->name = name;
}

bool Student::operator==(Student& other) const{
    bool isequal = (this->name == other.name && this->classId == other.classId);
    return isequal; 
}
