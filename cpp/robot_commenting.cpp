#include <iostream>

int main() {
    //Decalre and initialize variables
    double speed = 0.5; // Speed of the robot in meters per second
    double time = 10.0; // Time traveled by the robot in seconds

    /* Calculate the time it will take for the robot to travel the distance
        distance = time * speed
    */
    
    double distance = time * speed;

    // Output the result
    std::cout << "Distance traveled by the robot: " << distance << " meters." << std::endl;
    return 0;
}
