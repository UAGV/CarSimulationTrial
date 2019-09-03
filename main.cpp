#include <iostream>
using namespace std;
double currentVel;

class space {
public:
    double volume[3];
    double surfaceFriction;
};

class car {
public:
    string color;
    double location[3]; // m
    double velocity[3]; // m/s
    double orientation[4]; // Quat
    int numberOfSeats;
    int occupiedSeats;
    double dryMass;
    double breakingForce_max;
    double accelerationForce_max;
    bool breaking;
    bool accelerating;

    car() {
        occupiedSeats = 0;
        breaking = false;
        accelerating = false;

        location[0] = 0; // x position Inertial RF
        location[1] = 0; // y position
        location[2] = 0; // z position

        velocity[0] = 0; // x velocity Inertial RF
        velocity[1] = 0; // y velocity
        velocity[2] = 0; // z velocity

        orientation[0] = 1; // Scalar Body RF
        orientation[1] = 0; // x component
        orientation[2] = 0; // y component
        orientation[3] = 0; // z component
    }
};

class script{
public:
    int breakingEvent[];
    int accelerationEvent[];
    script(){                           // Default script

    }

};


int main(){

    // Initialisation of system
    double averageHumanMass = 75; // kg
    int simulationTime = 1000; // Seconds

    space testingSpace{};
    testingSpace.volume[0] = 1000;
    testingSpace.volume[1] = 1000;
    testingSpace.volume[2] = 1000;
    testingSpace.surfaceFriction = 150; // Friction units

    car Corsa{};
    Corsa.numberOfSeats = 5;            // available people positions
    Corsa.occupiedSeats = 3;            // people
    Corsa.breakingForce_max = 1500;     // Newtons
    Corsa.accelerationForce_max = 750;  // Newtons
    Corsa.dryMass = 1000;               // kg

    script simulationScript{};


    for(int i = 0; i <= simulationTime; i++){
        for (int j = 0; j <= 2; j++) {                   // Update position Inertial RF
            Corsa.location[j] = Corsa.velocity[j] * 1;
        }
        if(simulationScript.accelerationEvent == true){
            Corsa.accelerating = true;

        }
    }

}


