#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_DEPARTMENT_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_DEPARTMENT_H

#include "UniversityMember.h"

class Department {
    string departmentName;
    UniversityMember* members[50];
    int memberCount;
public:
    Department(string departmentName);
    void addMember(UniversityMember* member);
    void displayAllRoles();
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_DEPARTMENT_H