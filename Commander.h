//
// Created by Yoni on 27/05/2022.
//

#ifndef HW10_1_COMMANDER_H
#define HW10_1_COMMANDER_H

#include "PrivateSoldier.h"

class Commander : public PrivateSoldier {
protected:
    bool combat;
public:
    Commander(int id, int numOfOperations, const string &firstName, const string &lastName, int *grades, bool isCombat);

    Commander(const Commander &);

    Commander(Commander &&) noexcept ;

    void print() const override;

    bool medal() const override;

    bool isCombat() const;

};


#endif //HW10_1_COMMANDER_H
