#include "ball.h"

class Ball {
private:
    double speed;
    double position;
    bool alive;
    float lifetime;

public:
    Ball() {}
    Ball(double start_speed, double start_position) {
        speed = start_speed;
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
    static void updateBall(Ball* b, float changeInTime) {
        b->setLifetime(b->getLifetime()+changeInTime);
        b->setPosition(b->getPosition() + (b->getSpeed()*changeInTime));
        b->setSpeed(100/(b->getPosition()*b->getPosition())); // this should be a function of some sort
    }
};