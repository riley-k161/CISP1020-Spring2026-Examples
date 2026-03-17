#ifndef LAMB_H
#define LAMB_H
#include "follower.h"

#include <string>

class Lamb : public Follower {
public:
    // Constructor
    Lamb();
    Lamb(std::string name);
    Lamb(const Lamb& other); //copy constructor
    ~Lamb(); //destructor

    // Actions
    void performAction() override;
};

#endif