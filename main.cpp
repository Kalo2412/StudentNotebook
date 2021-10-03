//
//  main.cpp
//  TeacherNotebook
//
//  Created by Kaloyan Vachkov on 1.10.21.
//

#include <iostream>
#include "Student.hpp"
#include "Class.hpp"
int main(int argc, const char * argv[]) {
    Class A;
    Student az("Kaloyan", 16);
    Student az2("Ivan", 162);
    Student az3("Pesho", 161);
    Student az4("Nezo", 164);
    Student az5("Devo", 165);
    A.add_Student(az);
    A.add_Student(az2);
    A.add_Student(az3);
    A.add_Student(az4);
    A.add_Student(az5);
    
    std::cout << A.get_studentsNumber() << std::endl; 
    
    
    return 0;
}
