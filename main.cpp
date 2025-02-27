#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
    RenderWindow window(VideoMode(640, 480), "Tuxware's game", Style::Titlebar | Style::Close);
    Event ev;

    while (window.isOpen()) {
        while (window.pollEvent(ev)) {
            switch (ev.type) {
            case Event::Closed:
                window.close();
                break;
            case Event::KeyPressed:
                if (ev.key.code == Keyboard::Escape) {
                    window.close();
                }
                break;
            }
        }
        window.clear(Color(0xAA, 0xAA, 0xAA, 255));

        window.display();
    }

    return 0;
}
