#include <iostream>
#include "game.h"
using namespace std;
using namespace sf;

int main() {
    Game game;

    while (game.running()) {
        game.update();
        game.render();
    }

    return 0;
}
