#ifndef SPEEDLNX_H
#define SPEEDLNX_H

class Speed {
private:
    double speed;
    double acceleration;
    double position;

public:
    double getSpeed();
    void setSpeed(double newSpeed);
    double getAcceleration();
    void setAcceleration(double newAcceleration);
    double getPosition();
};

#endif // SPEEDLNX_H