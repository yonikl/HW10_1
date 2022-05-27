//
// Created by Yoni on 27/05/2022.
//

#ifndef HW10_1_SOLDIER_H
#define HW10_1_SOLDIER_H
#include <string>
#include <iostream>
using namespace std;

class Soldier {
private:
    int id, numOfOperations;
    string firstName, lastName;
public:
    Soldier(int id, int numOfOperations, const string &firstName, const string &lastName);

    virtual ~Soldier();

    virtual bool medal()=0;

    int getId() const;

    int getNumOfOperations() const;

    const string &getFirstName() const;

    const string &getLastName() const;

    friend ostream &operator<<(ostream &os, const Soldier &soldier);

    void print();

    virtual string soldierType() const=0;
};


#endif //HW10_1_SOLDIER_H