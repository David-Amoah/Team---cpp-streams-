//
// Created by amoah on 10/15/2023.
//

#include "ManageTeams.h"
#include <fstream>

using namespace std;

void ManageTeams::readFile(string fileName) {
    ifstream teamFS;
    string teamName;
    int wins;
    int losses;

    teamFS.open(fileName);

    while(!teamFS.is_open()) {
        cout << "Could not open file" << endl;
        return;
    }

    getline(teamFS, teamName);

    while (!teamFS.fail()) {
        teamFS >> wins;

        if (teamFS.fail()) {
            cout << teamName << " has no wins or losses" << endl;
            cout << endl;
        }
        else {
            teamFS >> losses;

            if (teamFS.fail()) {
                cout << teamName << " has " << wins << " wins" << endl;
                cout << endl;
            }

            teamFS.ignore();
        }

        teamFS.clear();

        Team team1(teamName,wins,losses);
        teams.push_back(team1);

        getline(teamFS, teamName);

    }

    teamFS.close();


}

void ManageTeams::print() {
    for (size_t i = 0; i < teams.size(); i++) {
        teams.at(i).printTeamInfo();
        cout << endl;
    }
}

void ManageTeams::writeFile(string fileName) {
    ofstream outFS;
    outFS.open(fileName);
    if(!outFS.is_open()) {
        cout << "Could not open file " << fileName << "." << endl;
        return;
    }
    for (size_t i = 0; i < teams.size(); i++) {
        outFS << teams.at(i) << " " << teams[i].calcAverage() << endl;
    }
    outFS.close();
}

ostream &operator<<(ostream &out,  ManageTeams &other) {
    for (size_t i = 0; i < other.teams.size(); i++) {
        out << other.teams.at(i) << " " << other.teams[i].calcAverage() << endl;
    }
    return  out;
}
