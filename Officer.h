//
// Created by Yoni on 27/05/2022.
//

#ifndef HW10_1_OFFICER_H
#define HW10_1_OFFICER_H
#include "Soldier.h"

class Officer : public Soldier{
protected:
    int sociometricScore;
public:
    Officer(int id, int numOfOperations, const string &firstName, const string &lastName, int sociometricScore);

    Officer(const Officer &);

    Officer(const Officer &&) noexcept ;

    void print() const override;

    int getSociometricScore() const;

    bool medal() const override;

    string soldierType() const override;
};


#endif //HW10_1_OFFICER_H
