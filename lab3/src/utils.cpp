#include "utils.h"

void printInfo(const PassengerCarrier &carrier) {
    std::cout << carrier.getSound() << " The cost(in BYN) per distance travelled is " << carrier.calculateCost()
              << std::endl;
    std::cout << carrier.getSound() << " The time(in Hours) per distance travelled is " << carrier.calculateTime()
              << std::endl;
}