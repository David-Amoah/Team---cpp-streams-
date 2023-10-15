//
// Created by amoah on 10/15/2023.
//

#include "Team.h"
#include <iostream>

using std::cout;
using std::endl;

Team::Team() {
    this -> teamName = "";
    this -> teamWins = 0;
    this -> teamLosses = 0;
}

Team::Team(std::string teamName, int teamWins, int teamLosses) {
    this -> teamName = teamName;
    this -> teamWins = teamWins;
    this -> teamLosses = teamLosses;
}

double Team::calcAverage() {
    return (double)teamWins / (teamWins +teamLosses);
}

void Team::printTeamInfo() {
    cout << "TeamName: " << teamName << endl;
    cout << "Wins: " << teamWins << endl;
    cout << "Losses: " << teamLosses << endl;
}

ostream &operator<<(ostream &out, const Team &other) {
    out << other.teamName << " " << other.teamWins << " " << other.teamLosses;
    return out;
}
