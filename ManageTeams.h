//
// Created by amoah on 10/15/2023.
//

#ifndef LOSSED_MANAGETEAMS_H
#define LOSSED_MANAGETEAMS_H

#include "Team.h"
#include <vector>
#include <iostream>

using namespace std;

class ManageTeams {
private:
    vector<Team> teams;
public:
    ManageTeams() {};
    void readFile(string fileName);
    void writeFile(string fileName);
    void print();
    friend ostream& operator <<(ostream& out, ManageTeams& other);

};


#endif //LOSSED_MANAGETEAMS_H
