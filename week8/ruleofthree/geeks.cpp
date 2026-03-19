#include <iostream>
#include "geeks.h"

using namespace std;

// Default constructor
// Dynamically initializing ptr using new
Geeks::Geeks() {
    cout << "Default constructor\n";
    ptr = new int;
    *ptr = 10;
}


//copy constructor
Geeks::Geeks(const Geeks& other) {
    cout << "Copy constructor\n";
    //create a new int for the object being copied to
    this->ptr = new int;
    //copy the data from other to new object
    *ptr = *(other.ptr);
}

//Destructor
Geeks::~Geeks() {
    cout << "Destructor\n";
    delete ptr;
    ptr = nullptr;
}

// Function to display the value of ptr
void Geeks::display() {
    cout << *ptr << endl;
}

//set ptr's value
void Geeks::setValue(int v) {
    *ptr = v;
}

//overloaded assignment operator
Geeks& Geeks::operator=(const Geeks& other) {
    cout << "Assignment operator\n";
    //protect against self-assignment
    if (this == &other) { return *this; }

    //free existing memory from the object being assigned
    delete ptr;
    ptr = new int; //allocate new memory
    *ptr = *(other.ptr); //copy value from other

    return *this;
}