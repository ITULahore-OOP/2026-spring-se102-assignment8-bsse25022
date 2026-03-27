#include "Staff.h"

Staff::Staff(string name, int memberID, double salary, AccessCard cardO) : UniversityMember(name, memberID), salary(salary), card(cardO){}

double Staff::getSalary(){return salary;}

void Staff::displayRole(){
    cout << "Role: Staff" << endl;
    cout << "Name: " << getName() << "\nID: " << getMemberID() << "\nSalary: $" << salary << endl;
}

void Staff::displayCard(){card.displayCardInfo();}