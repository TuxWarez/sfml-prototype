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
