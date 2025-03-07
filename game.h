#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class Game {
private:
    RenderWindow* window;
    VideoMode videoMode;
    Event ev;

    void initVariables();
    void initWindow();
public:
    Game();
    virtual ~Game();
    //accessors
    const bool running() const;

    //funcions
    void pollEvents();
    void update();
    void render();
};

/*
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = 1;
    int f = 0;
    int i;
    while (n < 2100000000) {
        n += 2;
        if (n % 3 == 0)
            f = 1;
        for (i = 5; i <= sqrt(n); i = i + 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                f = 1;
            }
        }
        if (f == 0) {
            cout << n << endl;
        }
        f = 0;
    }
}
*/
