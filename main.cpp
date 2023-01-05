#include "header.hpp"

int main() {
    ship ships[] = {ship("Sevastopol", 109, 2217), ship("Negev", 110, 876), ship("Nomad", 129, 1441), ship("Lighting", 445, 268)};
    float distance;
    int selectedShip;
    std::cout << "[0] Sevastopol" << std::endl << "[1] Negev" << std::endl << "[2] Nomad" << std::endl << "[3] Lightning" << std::endl;
    std::cout << "Choose a ship: ";
    std::cin >> selectedShip;
    std::cout << std::endl << "Input distance (in km): ";
    std::cin >> distance;
    float totalFuel = getTotalFuel(distance, ships[selectedShip].consumption);
    std::cout << std::endl << "To fly " << distance << "km with " << ships[selectedShip].name << " : " << std::endl;
    std::cout << "Fuel needed: " << totalFuel << " tons of methane." << std::endl;
    std::cout << "Costing you: " << getPrice(totalFuel) << " euros" << std::endl;
    std::cout << "Travel time: " << distance/ships[selectedShip].cruiseSpeed << "h" << std::endl << std::endl;
    std::cout << "Press any key to escape" << std::endl;
    getch();
}