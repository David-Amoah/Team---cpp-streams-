#include <iostream>

#include "ManageTeams.h"

int main() {
    ManageTeams teamList;

    teamList.readFile("teams.txt");
    //teamList.print();

    cout << teamList;


    teamList.writeFile("teamsAverage.txt");
    teamList.writeFile("teamsAverage.out");






    return 0;
}
