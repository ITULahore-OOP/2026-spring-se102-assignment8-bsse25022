#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours): UniversityMember(name, memberID), Student(name, memberID, cgpa), Staff(name, memberID, salary, card){
    this->workingHours = workingHours;
}
void TeachingAssistant::displayRole(){
    cout<< "Role: Teaching Assistant" <<endl;
    cout << "Name: "<<getName()<<"\nID: "<<getMemberID()<<"\nCGPA: "<<getCGPA()<<"\nSalary: $"<<getSalary()<< "\nHours: "<<workingHours<<endl;
}
void TeachingAssistant::gradeAssignment(int score){
    cout<<"numeric score: " << score << "/100" << endl;
    cout<<"Graded By: "<<getName()<<endl;
}
void TeachingAssistant::gradeAssignment(string letterGrade){
    cout<<"letter grade: " << letterGrade << endl;
    cout<<"Graded By: "<<getName()<<endl;
}