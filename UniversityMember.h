#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_UNIVERSITYMEMBER_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_UNIVERSITYMEMBER_H

#include <iostream>
#include <string>

using namespace std;

class UniversityMember {
    string name;
    int memberID;
public:
    UniversityMember(string name, int memberID);
    virtual ~UniversityMember();
    string getName();
    int getMemberID();
    virtual void displayRole() = 0;
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_UNIVERSITYMEMBER_H