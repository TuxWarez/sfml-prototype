#include <iostream>
#include "game.h"

void Game::initVariables()
{
    this->window =  nullptr;
}

void Game::initWindow()
{
    this->videoMode.height = 480;
    this->videoMode.width = 640;
    this->window = new RenderWindow(this->videoMode, "Tuxware's game", Style::Titlebar | Style::Close);
}

const bool Game::running() const
{
    return this->window->isOpen();
}

Game::Game()
{
    this->initVariables();
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}

void Game::pollEvents()
{
    //event polling
    while (this->window->pollEvent(this->ev)) {
        switch (this->ev.type) {
        case Event::Closed:
            cout << "Exited the game. \n";
            this->window->close();
            break;
        case Event::KeyPressed:
            if (this->ev.key.code == Keyboard::Escape) {
                cout << "Exited the game. \n";
                this->window->close();
            }
            if (this->ev.key.code == Keyboard::Up) {
                cout << "Up \n";
            }
            if (this->ev.key.code == Keyboard::Down) {
                cout << "Down \n";
            }
            if (this->ev.key.code == Keyboard::Left) {
                cout << "Left \n";
            }
            if (this->ev.key.code == Keyboard::Right) {
                cout << "Right \n";
            }
            if (this->ev.key.code == Keyboard::P) {
                system("clear");
            }
            if (this->ev.key.code == Keyboard::V) {
                cout << ":3 \n";
            }
            break;
        }
    }
}

void Game::update()
{
    this->pollEvents();
}


void Game::render()
{
    this->window->clear(Color(0xAA, 0xAA, 0xAA, 255));
    //draw game objects
    this->window->display();
}
