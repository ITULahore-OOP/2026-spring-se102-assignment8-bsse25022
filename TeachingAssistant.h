#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_TEACHINGASSISTANT_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff{
    int workingHours;
public:
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
    void displayRole() override;
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_TEACHINGASSISTANT_H