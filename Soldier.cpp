//
// Created by Yoni on 27/05/2022.
//

#include "Soldier.h"

Soldier::Soldier(int id, int numOfOperations, const string &firstName, const string &lastName) : id(id),
                                                                                                 numOfOperations(
                                                                                                         numOfOperations),
                                                                                                 firstName(firstName),
                                                                                                 lastName(lastName) {}

Soldier::~Soldier() {}

int Soldier::getId() const {
    return id;
}

int Soldier::getNumOfOperations() const {
    return numOfOperations;
}

const string &Soldier::getFirstName() const {
    return firstName;
}

const string &Soldier::getLastName() const {
    return lastName;
}

ostream &operator<<(ostream &os, const Soldier &soldier) {
    os << "ID " << soldier.id << "\nfirst name: " << soldier.firstName
       << "\nlast name: " << soldier.lastName << "\nnum operations: " << soldier.numOfOperations << endl;
    return os;
}

void Soldier::print() const{
    cout << this;
}

Soldier::Soldier(const Soldier &s) {
    this->id = s.id;
    this->firstName = s.firstName;
    this->lastName = s.lastName;
    this->numOfOperations = s.numOfOperations;
}

Soldier::Soldier(const Soldier && s) {
    this->id = s.id;
    this->firstName = s.firstName;
    this->lastName = s.lastName;
    this->numOfOperations = s.numOfOperations;
}
