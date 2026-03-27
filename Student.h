#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_STUDENT_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_STUDENT_H

#include "UniversityMember.h"

class Student : virtual public UniversityMember{
    double cgpa;
public:
    Student(string name, int memberID, double cgpa);
    double getCGPA();
    void updateCGPA(double newCGPA);
    void displayRole() override;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_STUDENT_H