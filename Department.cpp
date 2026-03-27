#include "Department.h"

Department::Department(string departmentName){
    this->departmentName = departmentName;
    memberCount = 0;
}
void Department::addMember(UniversityMember* member){
    if (memberCount < 50) {
        members[memberCount++] = member;
    }
}
void Department::displayAllRoles(){
    cout << "\n--- Department " << departmentName << " ---\n--- Members ---" << endl;
    for (int i = 0; i < memberCount; i++) {
        members[i]->displayRole();
    }
}