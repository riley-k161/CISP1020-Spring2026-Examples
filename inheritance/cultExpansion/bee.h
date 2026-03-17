#ifndef BEE_H
#define BEE_H
#include "follower.h"

#include <string>

class Bee : public Follower {
public:
    // Constructor
    Bee();
    Bee(std::string name);
    Bee(const Bee& other); //copy constructor
    ~Bee(); //destructor

    // Actions
    void performAction() override;
};

#endif