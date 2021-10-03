//
//  Teacher.cpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#include "Teacher.hpp"


Teacher::Teacher(const std::string& newName) : name(newName){}

void Teacher::add_notebook(Notebook& newNotebook){
    this->notebooks.push_back(newNotebook);
}

void Teacher::set_gradeToStudent(Student& current,const std::string& nameOfNotebook ,const unsigned newGrade)
{
    for(auto it = begin(notebooks); it != end (notebooks); it++){
        if(it->get_name() == nameOfNotebook){
            it->add_grade(current, newGrade); 
        }
    }
}

Notebook Teacher::get_Notebook(const std::string& name) const{
    for(auto it = begin(notebooks); it != end (notebooks); it++){
        if(it->get_name() == name){
            return *it;
        }
    }
    return Notebook("-1");
}

size_t Teacher::get_NotebookQuantity() const{
    return this->notebooks.size();
}
