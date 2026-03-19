#include <iostream>
#include "geeks.h"

using namespace std;

int main()
{
    cout << "===Creating g===\n";
    Geeks g;
    g.display();

    //copy constructor
    Geeks g2 = g;

    g.display();
    g2.display();

    g2.setValue(500);

    g.display();
    g2.display();

    Geeks g3;
    g3 = g;
    
    cout << "Exiting main\n";

    return 0;
}