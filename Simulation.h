//
// Created by Harry Pointon on 03/09/2019.
//

#ifndef SECOND_SIMULATION_H
#define SECOND_SIMULATION_H

#endif //SECOND_SIMULATION_H
using namespace std;

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


