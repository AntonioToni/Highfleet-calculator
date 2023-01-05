#include <iostream>
#include <conio.h>

class ship
{
    private:
        /* data */
    public:
        std::string name;
        int cruiseSpeed; // km/h
        float consumption; // tons/1000km
        ship(std::string name, int cruiseSpeed, float consumption);
        ~ship();
};

unsigned long int getPrice(float totalFuel);
float getTotalFuel(float distance, float consumption);