#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "model/ball.cpp"

using namespace std;

// return score / distance -- however you want to define it
Ball runValue(Ball b) {
    clock_t startClock = clock();
    while (b.getAlive()) {
        cout << "Change in seconds: " << (float)(clock() - startClock)/1000 << "\n";
        cout << "Speed: " << b.getSpeed() << "\n";
        b.updateBall(&b, (float) (clock() - startClock) / 1000);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        if (b.getSpeed() < 0.25)
            return b;
    }
    return b;
}

Ball runRef(Ball& bRef) {
    clock_t startClock = clock();
    while (bRef.getAlive()) {
        cout << "Change in seconds: " << (float)(clock() - startClock)/1000 << "\n";
        cout << "Speed: " << bRef.getSpeed() << "\n";
        bRef.updateBall(&bRef, (float) (clock() - startClock) / 1000);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        if (bRef.getSpeed() < 0.25)
            return bRef;
    }
    return bRef;
}

int main() {
    Ball ball(20.2, 1.1);
    cout << "my bounce ball math game.\n";
    std::cout << "created ball with speed: " << ball.getSpeed() << ", and position: " << ball.getPosition() << "\n";
    Ball ball2 = runValue(ball);
    std::cout << "ball ended with speed: " << ball2.getSpeed() << ", and position: " << ball2.getPosition() << "\n";;
    runRef(ball);
    std::cout << "ball ended with speed: " << ball.getSpeed() << ", and position: " << ball.getPosition();
}