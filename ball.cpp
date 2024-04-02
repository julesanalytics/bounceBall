#include "ball.h"

class Ball {
private:
    double speed;
    double acceleration;
    double position;
    bool alive;
    float lifetime;

public:
    Ball() {}
    Ball(double start_speed, double start_acceleration, double start_position) {
        speed = start_speed;
        acceleration = start_acceleration;
        position = start_position;
        alive = true;
        lifetime = 0.0;
    }
    double getSpeed() {
        return speed;
    }
    void setSpeed(double newSpeed) {
        speed = newSpeed;
    }
    double getAcceleration() {
        return acceleration;
    }
    void setAcceleration(double newAcceleration) {
        acceleration = newAcceleration;
    }
    double getPosition() {
        return position;
    }
    void setPosition(float newPosition) {
        position = newPosition;
    }
    bool getAlive() {
        return alive;
    }
    void setAlive(bool a) {
        alive = a;
    }
    float getLifetime() {
        return lifetime;
    }
    void setLifetime(float durationAlive) {
        lifetime = durationAlive;
    }
    void updatePosition(Ball* b, float changeInTime) {
        b->setLifetime(b->getLifetime()+changeInTime);
        b->setPosition(b->getPosition() + (b->getSpeed()*changeInTime));
        b->setSpeed(b->getSpeed()-1); // this should be a function of some sort
    }
};