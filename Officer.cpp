//
// Created by Yoni on 27/05/2022.
//

#include "Officer.h"

Officer::Officer(int id, int numOfOperations, const string &firstName, const string &lastName, int sociometricScore)
        : Soldier(id, numOfOperations, firstName, lastName), sociometricScore(sociometricScore) {}

Officer::Officer(const Officer & o) : Soldier(o), sociometricScore(o.sociometricScore){}

Officer::Officer(const Officer && o)  noexcept : Soldier(o), sociometricScore(o.sociometricScore){}

void Officer::print() const {
    Soldier::print();
    cout << "sociometric score: " << sociometricScore << endl;
}

int Officer::getSociometricScore() const {
    return sociometricScore;
}

bool Officer::medal() const {
    if(numOfOperations >= 2 && sociometricScore >= 92) return true;
    return false;
}

string Officer::soldierType() const {
    return "officer";
}
