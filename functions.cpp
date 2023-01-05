#include "header.hpp"

ship::ship(std::string name, int cruiseSpeed, float consumption) {
    this->name = name;
    this->cruiseSpeed = cruiseSpeed;
    this->consumption = consumption;
}

ship::~ship() {
}

unsigned long int getPrice(float totalFuel) {
    float pricePerLitre = 1.147; //change this to desired price per Litre of methane
    float pricePerTonne = pricePerLitre / 0.465 * 1000;
    return (pricePerTonne * totalFuel);
}

float getTotalFuel(float distance, float consumption) {
    return(distance * (consumption / 1000));
}

float getTime(float distance, int cruiseSpeed) {
    return(distance / cruiseSpeed);
}