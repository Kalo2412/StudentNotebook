//
//  Notebook.hpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#ifndef Notebook_hpp
#define Notebook_hpp
#include "Class.hpp"
#include "Student.hpp"
#include <string>
#include <vector>
#include <utility>

class Notebook{
private:
    std::vector<std::pair<Student, unsigned>> grades;
    std::string name;
public:
    Notebook(const std::string&); 
    void add_grade(Student&, const unsigned);
    void add_class(const Class&);
    
    void set_name(const std::string&);
    std::string get_name() const; 
};

#endif /* Notebook_hpp */
