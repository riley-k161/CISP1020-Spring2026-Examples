#include <iostream>

class Geeks {
private:
    int* ptr;

public:
    // Default constructor
    Geeks();

    //copy constructor
    Geeks(const Geeks& other);

    //destructor
    //~Geeks();

    // Function to display the value
    // of ptr
    void display();
    void setValue(int v);

    //overloaded operator=
    //Geeks& operator=(const Geeks& other);
};