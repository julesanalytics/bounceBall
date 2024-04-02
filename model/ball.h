/*
 * Created by Jack Julian on 4/1/24.
 * header file rule of thumb: 424-425
 */

#ifndef BOUNCEBALL_BALL_H
#define BOUNCEBALL_BALL_H

class Ball;
double getSpeed();
void setSpeed(double);
double getPosition();
void setPosition(float);
bool getAlive();
void setAlive(bool);
float getLifetime();
void setLifetime(float);
static void updateBall(Ball*, float);

#endif //BOUNCEBALL_BALL_H
