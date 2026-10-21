#ifndef CLASS_HEIRARCHY_BIKES_H
#define CLASS_HEIRARCHY_BIKES_H
#include <iostream>
#include <string>

class Seat {
    public:
    float cushionScore = 0.0f;
    int height =15;
    void adjustHeight();
};

class Bike {
    public:
    int fTireDiam = 26;
    int rTireDiam = 32;
    std::string name = "defaultBike";
    std::string year = "0";
    virtual void printDeets() {
        std::cout << name << ": "<<"year:"<< year << "front tire diameter:"<< fTireDiam<< "rear tire diameter"<< rTireDiam<< std::endl;
    }
    virtual ~Bike() = default;


};

class EVBike : public Bike{
private:
    Seat seat;
    public:
    void increaseSeat() {
        seat.adjustHeight();
    }
    void decreaseSeat() {
        seat.adjustHeight();
    }
    int batteryWh = 0;
    int battPercent = 100;
    void printDeets() override;
};

class MtnBike : public Bike{
    private:
    Seat seat;
    public:
    void increaseSeat() {
        seat.adjustHeight();
    }
    void decreaseSeat() {
        seat.adjustHeight();
    }
    float suspensionTravel =120.0f;
    std::string shockBrand = "defaultShock";
    void printDeets() override;

};

class streetBike : public Bike{
    private:
    Seat seat;
    public:
    void increaseSeat() {
        seat.adjustHeight();

    }
    void decreaseSeat() {
        seat.adjustHeight();
    }
    int gearNum = 1;
    bool hasPhoneMount = false;
    void printDeets() override;
};
#endif //CLASS_HEIRARCHY_BIKES_H
