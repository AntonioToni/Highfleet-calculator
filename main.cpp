#include "header.hpp"

int main() {
    ship sevastopol(100, 1800);
    float distance;
    
    std::cout << "Input distance (in km): ";
    std::cin >> distance;
    float totalFuel = getTotalFuel(distance, sevastopol.consumption);
    std::cout << "To fly " << distance << "km : " << std::endl;
    std::cout << "Fuel needed: " << totalFuel << " tons of methane." << std::endl;
    std::cout << "Costing you: " << getPrice(totalFuel) << " euros" << std::endl;
    std::cout << "Travel time: " << distance/sevastopol.cruiseSpeed << "h" << std::endl << std::endl;
    std::cout << "Press any key to escape" << std::endl;
    getch();
}