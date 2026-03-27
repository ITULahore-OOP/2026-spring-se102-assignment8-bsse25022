#include "TutoringSession.h"

TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}

double TutoringSession::getDuration(){return durationMinutes;}

void TutoringSession::displaySession(){
    cout <<"Session ID: "<<sessionID<<"\nDuration: "<<durationMinutes<<" mins \nTA: "<<ta->getName()<< "\nStudent: "<<student->getName()<<endl;
}

TutoringSession TutoringSession::operator+(const TutoringSession& other){
    return TutoringSession(this->sessionID + 100, this->durationMinutes + other.durationMinutes, this->ta, this->student);
}

bool operator>(TutoringSession s1, TutoringSession s2){
    return s1.getDuration() > s2.getDuration();
}