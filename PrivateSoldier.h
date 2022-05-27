//
// Created by Yoni on 27/05/2022.
//

#ifndef HW10_1_PRIVATESOLDIER_H
#define HW10_1_PRIVATESOLDIER_H

#include "Soldier.h"

class PrivateSoldier : Soldier {
private:
    int *grades;
public:
    PrivateSoldier(int id, int numOfOperations, const string &firstName, const string &lastName, int *grades);

    PrivateSoldier(const PrivateSoldier &);

    ~PrivateSoldier() override;

    bool medal() override;

    float average() const;

    int *getGrades() const;

    string soldierType() const override;

    void print() const override;
};


#endif //HW10_1_PRIVATESOLDIER_H
