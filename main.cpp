#include <iostream>
#include "bikes.h"

int main () {
    std::cout<<"printing bike object details\n\n";

    EVBike everyDayCarryBike;
    everyDayCarryBike.name = "Sur-Ron X";
    everyDayCarryBike.year= "2025";
    everyDayCarryBike.batteryWh = 2100;
    everyDayCarryBike.battPercent = 100;

    std::cout<< "increasing seat height for:"<< everyDayCarryBike.name << std::endl;
    everyDayCarryBike.increaseSeat();
    everyDayCarryBike.printDeets();

    MtnBike myMTB;
    myMTB.name = "Santa Crux";
    myMTB.year = "2026";
    myMTB.suspensionTravel = 140.0f;
    myMTB.shockBrand = "RockShox Lyrik";
    std::cout << "Details for: " << myMTB.name <<"\n"<< std::endl;
    myMTB.printDeets();

    streetBike cityCruiser;
    cityCruiser.name = "Sirrus Specialized";
    cityCruiser.year = "2011";
    cityCruiser.gearNum = 6;
    cityCruiser.hasPhoneMount = true;
    std::cout << "Details for: " << cityCruiser.name <<"\n"<< std::endl;

    return 0;
}