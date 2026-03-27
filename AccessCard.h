#ifndef INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_ACCESSCARD_H
#define INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_ACCESSCARD_H

#include <iostream>
#include <string>

using namespace std;

class AccessCard {
    string cardID;
    int accessLevel;
public:
    AccessCard(string cardID, int accessLevel);
    string getCardID();
    int getAccessLevel();
    void displayCardInfo();
};


#endif //INC_2026_SPRING_SE102_ASSIGNMENT8_BSSE25022_ACCESSCARD_H