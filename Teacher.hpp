//
//  Teacher.hpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#ifndef Teacher_hpp
#define Teacher_hpp
#include <iostream>
#include <string>
#include <vector>
#include "Notebook.hpp"

class Teacher {
private:
    std::string name;
    std::vector<Notebook> notebooks;
public:
    Teacher(const std::string&);
    void add_notebook(Notebook&);
    void set_gradeToStudent(Student&,const std::string& ,const unsigned);
    
    Notebook get_Notebook(const std::string&) const;
    size_t get_NotebookQuantity() const;
};




#endif /* Teacher_hpp */
