#include <iostream>
using namespace std;
double currentVel;

class car {
public:
    string color;
    int numberOfWheels;
    int numberOfDoors;
    double location[3];
    int numberOfSeats;
    double dryMass;
    double breakingRate;
    double distance;
    car(){
        location[0] = 0; // x position
        location[1] = 0; // y position
        location[2] = 0; // z position
    }
    double breakingDistance(double speed){
        distance = ((1/(dryMass+numberOfSeats)) * breakingRate)/speed;
        distance = distance * 1000;
        location[0] = distance;
        return distance;
    }
};

int main(){
    car Corsa;
    Corsa.color = "Red";
    Corsa.numberOfDoors = 3;
    Corsa.dryMass = 2534.2;
    Corsa.numberOfSeats = 5;
    Corsa.numberOfWheels = 4;
    Corsa.breakingRate = 2.2;
    cout << "Enter Corsa Speed in x axis: " << "\n";
    cin >> currentVel;
    double distanceTravelled = Corsa.breakingDistance(currentVel);
    cout << "Distance to a stop: " << distanceTravelled << "km" << "\n";
    cout << "New position of vehicle: " << Corsa.location[0] << Corsa.location[1] << "\n";

    car Fiesta;
    Fiesta.color = "Red";
    Fiesta.numberOfDoors = 5;
    Fiesta.dryMass = 2034.2;
    Fiesta.numberOfSeats = 5;
    Fiesta.numberOfWheels = 4;
    Fiesta.breakingRate = 4.4;

}


