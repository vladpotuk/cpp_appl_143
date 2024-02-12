#include <SFML/Graphics.hpp>
#include "Heart.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Valentine's Day Academy Logo");

    
    Heart heart(window.getSize().x / 2, window.getSize().y / 2);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        
        heart.update();
        heart.draw(window);

        window.display();
    }

    return 0;
}
