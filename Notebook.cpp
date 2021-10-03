//
//  Notebook.cpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#include "Notebook.hpp"


Notebook::Notebook(const std::string& newName){
    this->name = newName;
}

void Notebook::add_grade(Student& current, const unsigned newGrade){
    for(int i = 0; i < grades.size(); i++){
        if(grades[i].first == current){
            grades[i].second = newGrade;
        }
    }
}

void Notebook::add_class(const Class& other){
    
    for(int i = 0; i < other.get_studentsNumber(); i++)
    {
        auto& temporaryStudent = other.get_students()[i];
        grades.push_back(std::make_pair(temporaryStudent, 0));
    }
}

void Notebook::set_name(const std::string& otherName){
    this->name = otherName; 
}

std::string Notebook::get_name() const{
    return this->name; 
}
