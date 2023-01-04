#include <iostream>
#include <conio.h>

class ship
{
    private:
        /* data */
    public:
        int cruiseSpeed; // km/h
        float consumption; // tons/1000km
        ship(int cruiseSpeed, float consumption);
        ~ship();
};

unsigned long int getPrice(float totalFuel);
float getTotalFuel(float distance, float consumption);