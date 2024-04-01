//
// Created by Jack Julian on 4/1/24.
//

#ifndef BOUNCEBALL_BALL_H
#define BOUNCEBALL_BALL_H

class Ball {
private:
    double speed;
    double acceleration;
    double position;

public:
    Ball() {}
    Ball(double s, double a, double p) {
        speed = s;
        acceleration = a;
        position = p;
    }
    double getSpeed();
    void setSpeed(double newSpeed);
    double getAcceleration();
    void setAcceleration(double newAcceleration);
    double getPosition();
};

#endif //BOUNCEBALL_BALL_H
