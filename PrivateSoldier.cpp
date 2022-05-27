//
// Created by Yoni on 27/05/2022.
//

#include "PrivateSoldier.h"
#include <string>

PrivateSoldier::PrivateSoldier(int id, int numOfOperations, const string &firstName, const string &lastName,
                               int *grades) : Soldier(id, numOfOperations, firstName, lastName), grades(grades) {}

PrivateSoldier::PrivateSoldier(const PrivateSoldier & p): Soldier(p) {
    grades = new int[p.getNumOfOperations()];
    for (int i = 0; i < p.numOfOperations - 1; ++i) {
        grades[i] = p.grades[i];
    }
}

PrivateSoldier::~PrivateSoldier() {
    delete[] grades;
}

bool PrivateSoldier::medal() const {
    if(numOfOperations >= 10 && average() >= 95) return true;
    return false;
}

float PrivateSoldier::average() const {
    int sum = 0;
    for (int i = 0; i < numOfOperations - 1; ++i) {
        sum += grades[i];
    }
    return (float)sum / (float)numOfOperations;
}

int *PrivateSoldier::getGrades() const {
    return grades;
}

string PrivateSoldier::soldierType() const {
    return "private";
}

void PrivateSoldier::print() const {
    Soldier::print();
    if(numOfOperations){
        cout << "grades: ";
        for (int i = 0; i < numOfOperations - 1; ++i) {
            cout << grades[i] << " ";
        }
        cout << endl;
    }
}

PrivateSoldier::PrivateSoldier(PrivateSoldier && p) noexcept : Soldier(p){
    grades = p.grades;
    p.grades = nullptr;
}
