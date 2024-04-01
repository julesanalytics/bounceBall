#include <iostream>
#include "ball.h"

using namespace std;

int main() {
    double speed = 20.2;
    double acceleration = -1.8;
    double position = 1.1;
    Ball ball(speed, acceleration, position);
    cout << "my bounce ball math game.\n";
    cout << "created ball with speed: " << speed << ", acceleration: " << acceleration << ", and position: " << position;
}