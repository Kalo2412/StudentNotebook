//
//  Student.hpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#ifndef Student_hpp
#define Student_hpp
#include <string>

class Student {
private:
    std::string name;
    unsigned classId;
public:
    Student();
    Student(const std::string&, const unsigned);
    
    
    unsigned get_classId() const;
    void set_classId(const unsigned);

    std::string get_name() const;
    void set_name(const std::string&);
    
    bool operator==(Student&) const;
};

#endif /* Student_hpp */
