/* Experimenting with C++ as a language for simulation.
 * This project is aimed generating a 6DOF simulation environment for a car moving in a space.
 * Later down the line collision detection could be implemented, and hopefully elastic and inelastic physics.
 *
 * I am aware this is most likely available more easily elsewhere using other means, this is mearly an excercise.
 *
 * Harry A.G. Pointon - 03/09/2019
 */



#include <iostream>
#include "Simulation.h"
using namespace std;
const int simulationTime = 1000; // Seconds

class script {
public:
    double accelerationEvent[simulationTime];
    double breakingEvent[simulationTime];
};

int main(){

    // Initialisation of system
    double averageHumanMass = 75; // kg

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
    for(int i = 0; i <= simulationTime; i++) {
        simulationScript.accelerationEvent[i] = 0;
        simulationScript.breakingEvent[i] = 1;
    }


    for(int i = 0; i <= simulationTime; i++){
        for (int j = 0; j <= 2; j++) {                   // Update position Inertial RF
            Corsa.location[j] = Corsa.velocity[j] * 1;
        }
        if(simulationScript.accelerationEvent[i] <= 1 && simulationScript.accelerationEvent[i] > 0){
            Corsa.accelerating = true;
        }
        if(simulationScript.breakingEvent[i] <= 1 && simulationScript.breakingEvent[i] > 0){
            Corsa.breaking = true;
        }
    }

}


