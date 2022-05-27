//
// Created by Yoni on 27/05/2022.
//

#include "Commander.h"

Commander::Commander(int id, int numOfOperations, const string &firstName, const string &lastName, int *grades,
                     bool Combat) : PrivateSoldier(id, numOfOperations, firstName, lastName, grades),
                                    combat(Combat) {}

Commander::Commander(const Commander & c) : PrivateSoldier(c), combat(c.combat){}

void Commander::print() const {
    PrivateSoldier::print();
    cout << "combat: " << (combat ? "yes" : "no") << endl;
}

bool Commander::medal() const {
    if(numOfOperations >= 7 && average() >= 90 && combat) return true;
    return false;
}

bool Commander::isCombat() const {
    return combat;
}

Commander::Commander(Commander && c) noexcept : PrivateSoldier(c), combat(c.combat) {}
