

class Speed {
    private:
        double speed;
        double acceleration;
        double position;

    public:
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