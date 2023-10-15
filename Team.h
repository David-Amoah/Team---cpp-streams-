//
// Created by amoah on 10/15/2023.
//

#ifndef LOSSED_TEAM_H
#define LOSSED_TEAM_H

#include <string>
#include <sstream>

using namespace std;


class Team {
private:
    string teamName;
    int teamWins;
    int teamLosses;
public:
    Team();
    Team(string teamName, int teamWins, int teamLosses);
    double calcAverage();
    void printTeamInfo();
    friend ostream& operator <<(ostream& out, const Team& other);

};


#endif //LOSSED_TEAM_H
