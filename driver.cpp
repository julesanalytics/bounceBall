#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "ball.cpp"

using namespace std;

// return score / distance -- however you want to define it
Ball runValue(Ball b) {
    clock_t startClock = clock();
    while (b.getAlive()) {
        cout << "Change in time: " << clock() - startClock << "\n";
        cout << "Change in seconds: " << (float)(clock() - startClock)/1000 << "\n";
        b.updatePosition(&b, (float)(clock() - startClock)/1000);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        if (b.getSpeed() < 0.0)
            return b;
    }
    return b;
}

//Ball runRef(Ball* bRef) {
//    clock_t startClock = clock();
//    while (bRef->getAlive()) {
//        Ball b {bRef};
//        bRef.updatePosition(bRef*, clock() - startClock);
//        bRef.updatePosition(bRef, clock() - startClock);
//        if (bRef.getSpeed() < 0.0)
//            return bRef;
//    }
//    return b;
//}

int main() {
    Ball ball(20.2, -1.8, 1.1);
    cout << "my bounce ball math game.\n";
    std::cout << "created ball with speed: " << ball.getSpeed() << ", acceleration: " << ball.getAcceleration() << ", and position: " << ball.getPosition() << "\n";
    Ball ball2 = runValue(ball);
    std::cout << "ball ended with speed: " << ball2.getSpeed() << ", acceleration: " << ball2.getAcceleration() << ", and position: " << ball2.getPosition();


}