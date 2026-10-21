#include "bikes.h"

#include <iostream>
#include <ostream>


void Seat::adjustHeight() {
    height += 1;
    std::cout << "height has been adjusted to:" << height << std::endl;

}

void EVBike::printDeets() {
    Bike::printDeets();
    std::cout << "battery watt hours:" << batteryWh<< "w" << std::endl;
    std::cout << "battery percent" << battPercent << "%" << std::endl;
}

void MtnBike::printDeets() {
    Bike::printDeets();
    std::cout << "suspension travel in mm:" << suspensionTravel<< "mm" << std::endl;
    std::cout << "shock brand:" << shockBrand << std::endl;
}

void streetBike::printDeets() {
    Bike::printDeets();
    std::cout << "current gear number:" << gearNum << std::endl;
    std::cout << "does it have a phone mount?:" << (hasPhoneMount?  "yes":"no" ) << std::endl;
}