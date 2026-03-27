#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_TUTORINGSESSION_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_TUTORINGSESSION_H

#include "TeachingAssistant.h"
#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

class TutoringSession {
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;
public:
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
    double getDuration();
    void displaySession();
    TutoringSession operator+(const TutoringSession& other);
};

bool operator>(TutoringSession s1, TutoringSession s2);

#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_TUTORINGSESSION_H