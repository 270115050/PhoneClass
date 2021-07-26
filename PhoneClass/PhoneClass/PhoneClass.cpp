#include <iostream>
using namespace std;

class Phone {
public:
    double cost;
    int slots;
};

int main()
{
    Phone Y6, Y7;

    Y6.cost = 100.0;
    Y6.slots = 2;
    Y7.cost = 200.0;
    Y7.slots = 2;

    cout << "The phone cost of Y6: " << Y6.cost << "\n"
        << "The phone slots of Y6: " << Y6.slots << "\n"
        << "The phone cost of Y7: " << Y7.cost << "\n"
        << "The phone slots of Y7: " << Y7.slots << "\n";

    return 0;
}