#include "AccessCard.h"
#include "UniversityMember.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

int main(){

    AccessCard card("AC-456", 5);
    cout<<"Card ID: "<<card.getCardID()<<endl;
    cout<<"Access Level: "<<card.getAccessLevel()<<endl;

    Staff staff("Ali", 1056, 75000.0, card);
    cout<<"Staff Name: "<<staff.getName()<<endl;
    cout<<"Staff ID: "<<staff.getMemberID()<<endl;
    cout<<"Salary: "<<staff.getSalary()<<endl;

    Student student("Bilal", 1562, 3.3);
    cout<<"Student Name: "<<student.getName()<<endl;
    cout<<"Student ID: "<<student.getMemberID()<<endl;
    cout<<"CGPA: "<<student.getCGPA()<<endl;
    student.updateCGPA(3.7);
    cout<<"CGPA: "<<student.getCGPA()<<endl;


return 0;
}