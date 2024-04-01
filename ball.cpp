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
};