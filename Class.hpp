//
//  Class.hpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#ifndef Class_hpp
#define Class_hpp
#include "Student.hpp"
class Class {
private:
    Student* students;
    unsigned studentsNumber;
    unsigned capacity;
public:
    Class();
    Class(Class&);
    bool operator=(Class&);
    ~Class();
    
    void add_Student(Student&);
    void remove_Student();
    Student* get_students() const; 
    unsigned get_studentsNumber() const;
    
    
    void copy(Class&);
    void resize();
    void free();
    
    
};



#endif /* Class_hpp */
