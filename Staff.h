#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_STAFF_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

class Staff : virtual public UniversityMember{
    double salary;
    AccessCard card;
public:
    Staff(string name, int memberID, double salary, AccessCard cardO);
    double getSalary();
    void displayRole() override;
    void displayCard();
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_STAFF_H